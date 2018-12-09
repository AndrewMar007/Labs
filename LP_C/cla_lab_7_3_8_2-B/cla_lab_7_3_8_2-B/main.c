#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char file_name[255];
    FILE *file ,*f , *fp;
    printf("File name: ");
    fgets(file_name, 255, stdin);
    *strchr(file_name, '\n') = 0;
    file = fopen(file_name, "r");
    f=fopen(file_name, "r");
    fp=fopen(file_name, "r");
    CountLine(file);
    CountSpaces(f);
    CountCharactersAndLowerCase(fp);
    return 0;
}
void CountLine(FILE * file)
{
    size_t lines_count = 0;
    if (file == NULL)
    {
        printf("\nError, Unable to open the file for reading\n");
    }
    while (! feof(file))
    {
        if (fgetc(file) == '\n')
            lines_count++;
    }
    fclose(file);
    printf("Lines: %d\n", lines_count);
}
void CountSpaces(FILE * file)
{
    char symbol = ' ';
    int count;
    char ch;
    count = 0;
    if (file == NULL)
    {
        printf("\nError, Unable to open the file for reading\n");
    }
     while ((ch = fgetc(file)) != EOF)
        if (ch == symbol)
            count++;
     fclose(file);
    printf("Whitespaces: %d \n", count);

}

void CountCharactersAndLowerCase(FILE * fp)
{
    char Character = 0;
    int words = 0;
    int lower_case = 0;
    int entered_words = 0;
    char user_filename[100];
    char user_filecontent[100];


    if (fp == NULL)
    {
        printf("\nError, Unable to open the file for reading\n");
    }


    while((Character = fgetc(fp)) != EOF)
    {

                if (Character!= ' ' && Character != '\n')
                {

                        words++;

                }

                 if (islower(Character))
                {
                    lower_case++;
                }



    }

    fclose(fp);

    printf("Characters :%d\n", words);
    printf("LowerCase : %d\n", lower_case);
      system("pause");
}
