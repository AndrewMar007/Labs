#include <stdio.h>
#include <string.h>

void add (int x, int y)
   {
       printf("add %d %d: %d",x,y,x+y);
   }

void sub (int x, int y)
   {
       printf("sub %d %d: %d",x,y,x-y);
   }
void mul (int x, int y)
   {
       printf("mul %d %d: %d",x,y,x*y);
   }


int main(int argc, char *argv[])
{
    char act [5];
    int x, y;
	printf ("Choose action ");
	scanf("%s",&act);

		printf ("Write first operand ");
	scanf("%d",&x);

		printf ("Write second operand ");
	scanf("%d",&y);


	if (strcmp(act,"add")==0)
        add(x,y);
     else if (strcmp(act,"sub")==0)
        sub(x,y);
     else if (strcmp(act,"mul")==0)
        mul(x,y);

	return 0;
}
