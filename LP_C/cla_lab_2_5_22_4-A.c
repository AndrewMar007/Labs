#include <stdio.h>
int main()
{
int action;
scanf("%d",&action);
switch(action)
        {
        case 0:
            printf("The day of week is: Sunday");
            break;
        case 1:
        	printf("The day of week is: Monday");
            break;
        case 2:
        	printf("The day of week is: Tuesday");
            break;
        case 3:
        	printf("The day of week is: Wednesday");
            break;
        case 4:
        	printf("The day of week is: Thursday");
            break;
        case 5:
        	printf("The day of week is: Friday");
            break;
        case 6:
        	printf("The day of week is: Saturday");
            break;
        default :  
        	printf("There is no such day. Input value must be from 0 to 6.");
		}
return 0;
}

 

