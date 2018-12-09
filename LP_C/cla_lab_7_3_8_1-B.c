#include <stdio.h>

int main(){
	FILE *f1, *f2;
	char *fnameOriginal, *fnameCopy;
	char line[255];

	fnameOriginal = "copyme.txt";
	fnameCopy = "iamcopy.txt";
	f1 = fopen(fnameOriginal, "r");
	if (f1 == NULL){
		printf("Error opening a file.");
		return 0;
	}
	f2 = fopen(fnameCopy, "w");
	if (f2 == NULL){
		printf("Error opening a file.");
		return 0;
	}
	int i = 1;
    while (fgets(line, sizeof(line), f1)) {
		fprintf(f2, "%d %s", i, &line);
		i++;
    }
	fclose(f1);
	fclose(f2);

	return 0;
}
