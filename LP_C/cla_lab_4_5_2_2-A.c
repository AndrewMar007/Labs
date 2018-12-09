#include <stdio.h>
int main()
{
char Number[16];
int a,b,c,d;
printf("Enter numbers:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
sprintf(Number,"%d.%d.%d.%d",a,b,c,d);
printf("%s", Number);

return 0;
}
