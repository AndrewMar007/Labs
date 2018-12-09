#include <stdio.h>
int main()
{

    int day;
    printf("Write number of day\n");
    scanf("%d", &day);

    int month;
    printf("Write number of month\n");
    scanf("%d", &month);

    int D[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int now = 0;
    int i;
    for (i=0;i<month-1; ++i)
        now +=D[i];
    printf("The day of the year: %d", now+day);


return 0;
}

