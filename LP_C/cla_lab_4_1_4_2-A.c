#include <stdio.h>
int main()
{
int action;
scanf("%d",&action);
switch(action)
        {
        case 1:
            printf("There are 0 days before the given month.");
            break;
        case 2:
        	printf("There are 31 days before the given month.");
            break;
        case 3:
        	printf("There are 60 days before the given month.");
            break;
        case 4:
        	printf("There are 91 days before the given month.");
            break;
        case 5:
        	printf("There are 121 days before the given month.");
            break;
        case 6:
        	printf("There are 152 days before the given month.");
            break;
        case 7:
        	printf("There are 182 days before the given month.");
            break;
        case 8:
			printf("There are 213 days before the given month.");
            break;
        case 9:
        	printf("There are 243 days before the given month.");
            break;
        case 10:
        	printf("There are 274 days before the given month.");
            break;
        case 11:
			printf("There are 304 days before the given month.");
            break;
        case 12:
        	printf("There are 335 days before the given month.");
            break;
        default :  
        	printf("Error: no such month in my calendar.");
		}
return 0;
}

 

