#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    setlocale(LC_ALL, "rus");
    setlocale(LC_NUMERIC, "C");

    char str[255];
    int i, j;

    printf("¬ведите строку:\n");
    scanf("%s", str);
    //for (i = 0; i < 255; i++)
       //scanf("%c", &str);
    for (j = strlen(str); j >= 0; j--)
        printf("%c", str[j]);

    return 0;
}
