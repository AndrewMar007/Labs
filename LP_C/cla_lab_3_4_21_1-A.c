#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);
    if(num < 1){
        return 0;
    }
    if(num > 20){
        num = 20;
    }

    int a,b;
    for( a = 0; a < num; a = a + 1 ){
        for( b = 0; b <=a+1; b = b + 1 ){
            if(b==0||b==a+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for( ; a > 0; a = a - 1 ){
        for( b = 0; b <= a+1; b = b + 1 ){

            if(b==0||b==a){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}