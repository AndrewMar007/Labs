#include <stdio.h>

int main()
{
	int i;
	float numbers[10] = { 3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2 };
	float biggerNumbers[10];
	for (i = 0; i < 10; i++)
	{
		biggerNumbers[i] = ++numbers[i];
	}
	int index_m = 5;
	int index_p = 4;
	for (i=0;i<5;i++) {
		printf("%.1f\n", biggerNumbers[--index_m]);
		printf("%.1f\n", biggerNumbers[++index_p]);
	}
	return 0;
}