#include <stdio.h>
#include <stdlib.h>

int Array_equal(int n,int arrayA[][n], int arrayB[][n])
{

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(arrayA[i][j] > arrayB[i][j]) return 1;
            if(arrayA[i][j] < arrayB[i][j]) return -1;
        }
    }
    return 0;
}

void Print_equal(int n,int arrayA[][n], int arrayB[][n])
{
    int result = Array_equal(n, arrayA, arrayB);
    if(result == 0)printf("Both matrices are equal\n"); else
    if(result == 1)printf("matrixA is greater than matrixB\n"); else
    if(result == -1)printf("matrixA is smaller than matrixB\n");
}

int main()
{

    int arrayA[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arrayB[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int arrayC[3][3] = {{9,8,7},{6,5,4},{3,2,1}};

    Print_equal(3, arrayC,arrayB);
    Print_equal(3, arrayA,arrayB);
    Print_equal(3, arrayB,arrayA);
    Print_equal(3, arrayB,arrayC);
    Print_equal(3, arrayA,arrayC);
    Print_equal(3, arrayC,arrayA);

    return 0;
}
