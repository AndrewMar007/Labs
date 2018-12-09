#include <stdio.h>

int main()

{
		int xValue= 5;
		int yValue= 9;
		int result;
		int bigResult;

		xValue += 3;
		yValue -= xValue;
		result = xValue*yValue;
		result += result;
		result = --result;
		yValue = result % result;
		result = result  + xValue;
		bigResult = result*result*result;

		printf("result:%d\n", result);
		printf("big result:%d\n", bigResult);
		return 0;
}
