
#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

int main(void)
{
   int size = 2, current = 0, actual_size = 0, i = 0;
   int* array = malloc(sizeof(int) * size);
   while (1)
   {
      fprintf(stdout, "%s", "Input value: ");
      fscanf(stdin, "%d", &current);
      if (current == 0)
      {
         break;
      }
      if (actual_size + 1 > size)
      {
         size *= 2;
         array = realloc(array, sizeof(int) * size);
      }
      array[actual_size++] = current;
   }
   fprintf(stdout, "\n%s: ", "array");
   for (i = 0; i < actual_size; ++i)
   {
      fprintf(stdout, "%d ", array[i]);
   }
   fprintf(stdout, "\n%s: ", "sum");
   for (i = 0; i < actual_size-pow(2,i-1); ++i)
   {
      fprintf(stdout, "%d ", array[2*i]+array[2*i+1]);
   }
   fprintf(stdout, "%s", "\n");
   free(array);
   return 0;
}
