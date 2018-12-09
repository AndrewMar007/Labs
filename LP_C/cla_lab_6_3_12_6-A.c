#include <stdio.h>
int stringCompare(char *str1, char *str2)
{
    int num;
    for (num = 0; str1[num]!=0 && str2[num]!=0; num++)
    {
        if(str1[num]>str2[num])
        {
        return 1;
        }
        else if (str1[num]<str2[num])
        {
        return -1;
        }
    }

    if (str1[num] == 0)
    {
        if (str2[num] == 0)
        return 0;
        else  return -1;
    }
    else  return 1;
}

int main(void)
{
    int result1 = stringCompare("AAA", "BBB");
    int result2 = stringCompare("AAC", "AAB");
    int result3 = stringCompare("AAC", "AAC");
    int result4 = stringCompare("AAC", "AACC");
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);
    return 0;
}
