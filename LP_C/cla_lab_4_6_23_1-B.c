#include <stdio.h>
int main()
{
	printf("%d byte for chars\n", sizeof(char));
	char c;
	printf("%d byte for char variables\n", sizeof(c));
	
	printf("%d bytes for shorts\n", sizeof(short));
	short s;
	printf("%d bytes for short variables\n", sizeof(s));
	
	printf("%d bytes for ints\n", sizeof(int));
	int i;
	printf("%d bytes for int variables\n", sizeof(i));
	
	printf("%d bytes for longs\n", sizeof(long));
	long l;
	printf("%d bytes for long variables\n", sizeof(l));
	
	printf("%d bytes for long longs\n", sizeof(long long));
	long long ll;
	printf("%d bytes for long long variables\n", sizeof(ll));
	
	printf("%d bytes for floats\n", sizeof(float));
	float f;
	printf("%d bytes for float variables\n", sizeof(f));
	
	printf("%d bytes for doubles\n", sizeof(double));
	double d;
	printf("%d bytes for double variables\n", sizeof(d));
	
	printf("%d bytes for pointers\n", sizeof(int *));
	int *pi;
	printf("%d bytes for pointer variables\n", sizeof(pi));
	
	char *pc;
	
	printf("%d bytes for address of char variable\n", sizeof(&pc));
	printf("%d bytes for pointer to char variable\n", sizeof(pc));
	printf("%d byte for value stored by pointer to char variable\n", sizeof(*pc));
	return 0;
}

