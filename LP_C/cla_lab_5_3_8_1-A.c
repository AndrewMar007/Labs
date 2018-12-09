
#include <stdio.h>
int main()
{
   char *chessboard [8][8];
   for (int i=0;i<8;i++)
   {
       for (int j = 0; j<8;j++)
       {
           if (i==0 || i==7)
           {
               switch (j)
               {
                   case 0: case 7: chessboard[i][j] ="R"; break;
                   case 1: case 6: chessboard[i][j] ="N"; break;
                   case 2: case 5: chessboard[i][j] ="B"; break;
                   case 3: chessboard[i][j] ="Q"; break;
                   case 4: chessboard[i][j] ="K"; break;
               }
           }
           else if(i==1 || i == 6)
           {
               chessboard[i][j] ="P";
           }
           else  chessboard[i][j] =" ";
       }
   }

    for (int i=0;i<8;i++)
   {
       for (int j = 0; j<8;j++)
       {
           printf("%s",chessboard[i][j]);
       }
       printf("\n");
   }
return 0;
}
