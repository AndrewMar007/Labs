#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[26];
    for(char i = 'a'; i <= 'z'; i++)
    {
        a[i] = i;
    }
    for(char i = 'z'; i>='a'; i--)
        printf("%c\n",a[i]);
    printf("%c%c%c%c%c",a['g'],a['r'],a['e'],a['a'],a['t']);
    return 0;
}
