
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	int x[30],i; int j,min;
	puts("RANDOMIZE:");
	srand(time(NULL));
	for(i=0; 10>i; i++)
	{
		x[i]=1+rand()%99;
		if(i<10)
			printf("x[%d]  = %d\n",i,x[i]);
		else
			printf("x[%d] = %d\n",i,x[i]);
	}

	puts("RESULT. . .");

	for(i=0;10>i;i++)
	{
		min=x[i];
		for(j=i;10>j;j++)
		{
			if(min>x[j]) min=x[j];
		}
                x[i]=min;
	}

        for(i=0; 10>i; i++)
	{
		if(i<10)
			printf("x[%d]  = %d\n",i,x[i]);
		else
			printf("x[%d] = %d\n",i,x[i]);
	}
	return 0;
}
