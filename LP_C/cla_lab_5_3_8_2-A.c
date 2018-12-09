#include "stdio.h"
#include "string.h"

int main (int argc, char *argv[]) {
	int x = 7;
	while (x > 6 || x < 0)
		{
		puts("enter value between 0 and 6");
		scanf("%d", &x);
		if (x > 6 || x < 0) 
			puts("Error, no such day");	
		}
   
   int var[] = {0,1,2,3,4,5,6};
   int  i, *ptr;

   ptr = var;
	
   for ( i = 0; i < x; i++) {
      ptr++;
   }
char *days[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
   int day = *ptr;
	printf("pointer %s \n", days[day]);
	printf("array %s \n", days[x]);
   
	
   return 0;
}