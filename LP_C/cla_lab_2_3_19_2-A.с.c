#include <stdio.h>
int main()
{
    char firstLetter = 'A';
    char firstSmallLetter = 'a';
    char lastLetter = 'Z';
    char lastSmallLetter = 'z';
    printf("Upper case letters beetween (and with) '%c' and '%c' is : %d\n", lastLetter, firstLetter, lastLetter - firstLetter + 1);
    printf("Lower case letters beetween (and with) '%c' and '%c' is : %d\n", lastSmallLetter, firstSmallLetter, lastSmallLetter -firstSmallLetter + 1);
    return 0;
}

