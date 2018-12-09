#include <stdio.h>
int main()
{
    /* your code */
    int day;
    scanf("%d", &day);
    int month;
    scanf("%d", &month);
    int year;
    scanf("%d", &year);

    /* because you may not know the else instruction yet,
    this simple formula will help you to check if a year is a leap year */
    int add = 0;
    if (year % 400 == 0)
         add = 1;
    else if (year % 100 == 0)
    add = 0;
    else if (year % 4 == 0)
    add = 1;
    int d[12] = {31, 28, 31,30 ,31,30,31,31,30,31,30,31};
    d[1] += add;
    int now = 0;
    int i;
    for (i=0;i<month-1; ++i)
        now +=d[i];
    printf("The day of the year: %d", now+day);

    return 0;
}

