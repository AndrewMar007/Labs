#include <stdio.h>

int main()
{
		char zero = '0';
		char one = '1';
		char two = '2';
		char three = '3';
		char four = '4';
		char five = '5';
		char six = '6';
		char seven = '7';
		char eight = '8';
		char nine = '9';

		printf("\'%c\' -\'%c\' is: %d\n", one, zero, one-zero);
		printf("\'%c\' -\'%c\' is: %d\n", two, zero, two-zero);
		printf("\'%c\' -\'%c\' is: %d\n", three, zero, three-zero);
		printf("\'%c\' -\'%c\' is: %d\n", four, zero, four-zero);
		printf("\'%c\' -\'%c\' is: %d\n", five, zero, five-zero);
		printf("\'%c\' -\'%c\' is: %d\n", six, zero, six-zero);
		printf("\'%c\' -\'%c\' is: %d\n", seven, zero, seven-zero);
		printf("\'%c\' -\'%c\' is: %d\n", eight, zero, three-zero);
		printf("\'%c\' -\'%c\' is: %d\n", nine, zero, nine-zero);
		
		return 0;

}