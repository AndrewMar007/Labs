#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int k,t;
    printf("Enter size: ");
    scanf("%d",&size);
    printf("\n");
    if(size > 20) printf("Matrix too big."); else
    for(int i = 0; i<=size; i++)
    {

        for(int j = 0; j<=size; j++)
        {
            if(i == 0 && j != 0)
            {
                if(j<10)  printf("    %d",j); else printf("   %d",j);
            } else
            if(j == 0 && i != 0) printf("%d",i);else
            if(i != 0 && j != 0)
            {
                k = 0;
                t = i*j;
                while(t>0)
                {
                    t /= 10;
                    k++;
                }
                if(i>9 && j == 2) k++;
                for(int j = 0; j < 4-k+1; j++)
                    printf(" ");
                printf("%d",i*j);

            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
