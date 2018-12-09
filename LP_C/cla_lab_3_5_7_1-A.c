#include <stdio.h>

int main()
{
    int year;

    printf("Please input an year value: ");
    scanf("%d", &year);
    if(year<=0){
        printf("You entered wrong year value");
    }
    if(year%4!=0&&year!=0){
        printf("%d is not a leap year \n", year);
    }
    if(year%4==0&&year!=0){
         printf("%d is a leap year \n", year);
    }

    return 0;
}
