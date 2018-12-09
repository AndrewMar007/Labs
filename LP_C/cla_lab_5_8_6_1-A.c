#include <stdio.h>
#include <string.h>

struct Family
{
	char father[50];
	char mother[50];
	char elderSister[50];
	char youngerBrother[50];
};

int main()
{
	struct Family family;

	strcpy(family.father, "James Johnson\n");
	strcpy(family.mother, "Mary Smith\n");
	strcpy(family.elderSister, "Patricia William\n");
	strcpy(family.youngerBrother, "John Brown\n");

	printf(family.father);
	printf(family.mother);
	printf(family.elderSister);
	printf(family.youngerBrother);

	return 0;
}
