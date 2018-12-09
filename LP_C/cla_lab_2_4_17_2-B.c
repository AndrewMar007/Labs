#include <stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	int x;
	x = (int) a;
	if(1 <= x && x < 2){
		printf("Very bad.");
	}
	else{
		if(2 <= x && x < 3){
			printf("Bad.");
		}
		else{
			if(3 <= x && x < 4){
				printf("Neutral.");
			}
			else{
				if(4 <= x && x < 5){
					printf("Good.");
				}
				else{
					if(5 <= x && x < 6){
						printf("Very good.");
					}
				}
			}
		}
	}
	return 0;
}

