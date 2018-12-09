#include <stdio.h>

double average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

int main()
{
float studentAYear1 = 4.2;
float studentAYear2 = 4.5;
float studentAYear3 = 4.2;
float studentBYear1 = 4.3;
float studentBYear2 = 4.4;
float studentBYear3 = 4.7;
float studentCYear1 = 4.3;
float studentCYear2 = 4.8;
float studentCYear3 = 4.9;
printf("Student name: 1stYGrade 2ndYGrade 3rdYGrade Avg\n");
printf("Student A%14.2f%10.2f%10.2f%5.2f\n", studentAYear1, studentAYear2, studentAYear3, average(studentAYear1, studentAYear2, studentAYear3));
printf("Student B%14.2f%10.2f%10.2f%5.2f\n", studentBYear1, studentBYear2, studentBYear3, average(studentBYear1, studentBYear2, studentBYear3));
printf("Student C%14.2f%10.2f%10.2f%5.2f\n", studentCYear1, studentCYear2, studentCYear3, average(studentCYear1, studentCYear2, studentCYear3));
return 0;
}
