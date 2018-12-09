#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

char** str_split(char* a_str, const char a_delim)
{
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = a_str;
    char* last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    while (*tmp)
    {
        if (a_delim == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }
    count += last_comma < (a_str + strlen(a_str) - 1);
    count++;
    result = malloc(sizeof(char*) * count);

    if (result)
    {
        size_t idx  = 0;
        char* token = strtok(a_str, delim);

        while (token)
        {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}

int main()
{
	int flag = 0;
	printf( "Enter a value :");
	char input[100];
	int mass[100];
	scanf("%s", input);
	char** tokens;
    //printf("input=[%s]\n\n", input);
    tokens = str_split(input, '.');
    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            //printf("token=[%s]\n", *(tokens + i));
            	mass[i] = atoi(*(tokens + i));

            	if(i == 3)
            		flag = 1;
            	if(i == 4)
            		flag = 0;

            free(*(tokens + i));
        }
        //printf("\n");
        free(tokens);
    }

    //int size = sizeof(mass)/sizeof(int);
    int i = 0;

    while(i<4){
    	//printf("\n%d", mass[i]);
    	if(mass[i]>255 || mass[i] < 0)
    	flag = 0;
    	i++;
    }
    if(flag != 0)
    {
    	printf("\nLast 3 parts: ");
    	for(i = 0; i<4; i++){
    		if(i == 0)
    			continue;
    		if(i<3)
    			printf("%d.", mass[i]);
    		if(i == 3)
    			printf("%d", mass[i]);
    	}
    	printf("\nLast 2 parts: ");
    	for(i = 0; i<4; i++){
    		if(i < 2)
    			continue;
    		if(i<3)
    			printf("%d.", mass[i]);
    		if(i == 3)
    			printf("%d", mass[i]);
    	}
    	printf("\nLast 3 parts: ");
    	for(i = 0; i<4; i++){
    		if(i < 3)
    			continue;
    		if(i == 3)
    			printf("%d", mass[i]);
    	}
    }
    	else printf("\n\nError: not a valid address");
    return 0;
}


