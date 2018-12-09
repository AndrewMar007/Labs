#include <stdio.h>

double PowerFunc(double x, int y)
{
	if(y == 1)
		return x;
	else if(y>1){
			while(y > 1){
				x*=x;
				y--;
			}	
		return x;
	}
	else return 1;
}

int main(){
   double x;
   int y;
	double result;
   printf( "Enter a values (double, int) :");
	scanf("%lf %d", &x, &y);
	printf( "\nYou entered: %lf %d", x,y);
   result = PowerFunc(x,y);
   printf( "\nresult: %lf", result);

	return 0;
}


