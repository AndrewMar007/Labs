#include <stdio.h>
void fun(double n)
{
	double rez ;
	rez = n * n;
	printf("square of %.2f %s %.2f " ,n,"is", rez);
	
}

int main()
{
	
double n;
scanf("%lf",&n);
fun(n);

return 0;
}






