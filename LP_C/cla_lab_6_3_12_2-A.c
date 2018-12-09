#include <stdio.h>
int getValue(int paramA, float paramB)
{
	int result = 0;
	if (paramA>10)
	{
		result += 2;
	}
	else
	{
		result += 1;
	}
	if (paramB>5.5)
	{
		result += 4;
	}
	else
	{
		result += 3;
	}
	return result;
}

int getOneOrTwo(int param)
{
	if(param > 5)
	return 2;
	return 1;
}

int main(void)
{
	int fiveValue ; /* your code */
	int sixValue ; /* your code */
	int sevenValue ; /* your code */
	int eightValue ; /* your code */
	int nineValue ; /* your code */
	
	fiveValue = getValue(0, 6);
	sixValue = getValue(11, 6);
	sevenValue = sixValue + getOneOrTwo(4);
	eightValue = sevenValue + getOneOrTwo(4);
	nineValue = sevenValue + getOneOrTwo(6);
	
	printf("Five: %d\n", fiveValue);
	printf("Six: %d\n", sixValue);
	printf("Seven: %d\n", sevenValue);
	printf("Eight: %d\n", eightValue);
	printf("Nine: %d\n", nineValue);
	return 0;
}
