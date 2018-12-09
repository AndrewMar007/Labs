#include <stdio.h>
#include "triangle.h"
#include "floydsTriangle.h"
int main(int argc, char *argv[]){
	int n;
	scanf("%d", &n);
	triangle(n);
	floydstr(n);
	return 0;
}

