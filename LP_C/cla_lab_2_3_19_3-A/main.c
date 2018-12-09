#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zero = '0';

    for(int i = 1; i <= 9; i++)
    {
        printf("\'%d\' - \'0\' is: %d\n", i,i);
    }
    printf("\'0\' - \'0\' is: 0\n");
    return 0;
}
