#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	
	int i, j;
	
	if(num == 0) 
		num = 1;
	
	for(i = 0; i < num; i++)
	{
		for (j = 0; j <= i; j++){
			printf("*#");
		}
		printf("\n");
	}
	
	return 0;
}

