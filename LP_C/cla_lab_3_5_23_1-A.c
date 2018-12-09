#include <stdio.h>

int main(void) {
    printf("Input: ");
    int i;
    scanf("%i", &i);

    int j = i >> 4;
    printf("H nibble: %i\n", j);
    printf("L nibble: %i\n", i - (j << 4));
}
