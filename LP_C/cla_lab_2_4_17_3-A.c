#include <stdio.h>
int main(void)
{
int dayOfWeek = 1;
system("chcp 1251");
  system("cls");
  printf("¬вед≥ть номер дн€ тижн€: ");
  scanf("%d",&dayOfWeek);
  printf("ƒень тижн€: ");
  switch (dayOfWeek)
  {
    case 1:	printf("понед≥лок"); break;
    case 2: printf("в≥второк"); break;
    case 3: printf("середа"); break;
    case 4: printf("четвер"); break;
    case 5: printf("п'€тниц€"); break;
    case 6: printf("субота"); break;
    case 7: printf("нед≥л€"); break;
    default: printf("Ќев≥рний день тижн€"); break;
  }
  getchar();

return 0;
}

