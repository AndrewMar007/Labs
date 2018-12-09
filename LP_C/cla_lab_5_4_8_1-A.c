#include <stdio.h>

int main()
{
    int kol;
    scanf("%d", &kol);
    if (kol>1024*1024) {
        printf("Too much memory requested\n");
        return 0;
    }
    char mem[kol];
    char ch = 'A';
    int i;
    for ( i=1;i<=kol; ++i)
    {
        mem[kol] = ch;
        if (i<=400) printf("%c", ch);
        if (i%26==0) ch = 'A'; else ch ++;

    }
    return 0;


}



