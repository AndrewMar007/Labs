#include <iostream>

using namespace std;

class Date {
    public:
        int day, month, year;
        enum weekday { THURSDAY, FRIDAY, SATURDAY, SUNDAY, MONDAY, TUESDAY, WEDNESDAY };
        enum month { january = 1, february, march, april, may, june, july, august, september, oktober,november, december };
        string DayWeek (int da) {
            switch (da) {
                case MONDAY:   return"Monday";
                case TUESDAY: return "Tuesday";
                case WEDNESDAY: return "Wednesday";
                case THURSDAY:  return "Thursday";
                case FRIDAY:    return "Friday";
                case SATURDAY:  return"Saturday";
                case SUNDAY:   return "Sunday";
                default:        return "Somewhere inside the depths of time...";
            }
            return "";
        }
        string Month(int da) {
            switch (da) {
                case january:   return "january";
                case february:   return"february";
                case march: return "march";
                case april: return "april";
                case may:  return "may";
                case june:    return "june";
                case july:  return"july";
                case august:  return"august";
                case september:  return"september";
                case oktober:  return"oktober";
                case november:  return"november";
                case december:  return"december";
                default:        return "Somewhere inside the depths of time...";
            }
            return "";
        }
        Date(int d = 1, int m = 1, int y = 1970) {
            if (y < 1970)
                throw string("data must be more 1.1.1970");
            if(m < 1 || m > 12)
                throw string("month in range [1....12]");
            if (d < 1 || d > 31)
                throw string("day in range [1....31]");
            day = d;
            month = m;
            year = y;
        }
        bool isLeap(int year){
            return year % 400 == 0 || year % 100 != 0 && year % 4 == 0;
        }
        int monthLength(int year, int month){
            if (month == 2 && isLeap(year))
                return 29;

            int lengths[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            return lengths[month - 1];
        }
        int dayOfYear(Date date){
            int res = date.day;
            for (int i = 1; i < date.month; i++)
                res += monthLength(date.year, i);
            return res;
        }
        int daysBetween(Date d1, Date d2){
            if(d1.year > d2.year)
                return -1;

            int daysCount = dayOfYear(d2) - dayOfYear(d1); //At first count days in last year
            if(d1.year == d2.year && daysCount < 0)
                return -1;

            for(int i = d1.year; i < d2.year; ++i) //Then count previous years
                daysCount += isLeap(i) ? 366 : 365;
            return daysCount;
        }
        int operator-(Date w) {
            return daysBetween(w, *this);
        }
};

int main()
{
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
	Date q(day, month, year);
	Date w(1, 1, 1970);
	int qq = q - w;
	cout << q.day << " " << q.Month(q.month) << " " << q.year << " - " << q.DayWeek(qq % 7) <<
        " - "<< qq <<" days since 1st January 1970" << endl;
    return 0;
}
