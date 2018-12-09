#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	FILE *f1;
	char indexfile[80];
	printf("write a destination to the file without format\n");
	scanf("%s", indexfile);
	char indexfilesource[80] = { indexfile };
	strcat(indexfile, ".txt");
	if ((fp = fopen(indexfile, "rb")) == NULL)
	{
		perror("Error occured while opening file");
		return 1;
	}
	strcat(indexfilesource, "1");
	strcat(indexfilesource, ".txt");
	f1 = fopen(indexfilesource, "w");
	fclose(f1);
	return 0;
}