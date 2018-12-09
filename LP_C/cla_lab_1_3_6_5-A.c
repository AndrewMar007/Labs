#include<stdio.h>

int main()
{
	int current_february = 28;
	int january = 31;
	int february = 29;
	int april = 30;
	int march = 31;
	int may = 31;
	int july = 31;
	int august = 31;
	int october = 31;
	int december = 31;
	int june = 30;
	int september = 30;
	int november = 30;
	int quarter_1_current = january + current_february + march;
	int quarter_1 = january + february + march;
	int quarter_2 = april + may + june;
	int quarter_3 = july + august + september;
	int quarter_4 = october + november + december;
	
	printf("Days in quarters (2018)\n");
	printf("Days in Q1 of the current year: %d\n", quarter_1_current);
	printf("Days in Q2 of the current year: %d\n", quarter_2);
	printf("Days in Q3 of the current year: %d\n", quarter_3);
	printf("Days in Q4 of the current year: %d\n\n", quarter_4);
	
	printf("Days in quarters of the year\n");
	printf("Days in Q1 of the year: %d\n", quarter_1);
	printf("Days in Q2 of the year: %d\n", quarter_2);
	printf("Days in Q3 of the year: %d\n", quarter_3);
	printf("Days in Q4 of the year: %d\n", quarter_4);
	
	return 0;
}