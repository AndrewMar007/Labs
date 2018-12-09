#include <stdio.h>
void hello()
{
puts("Hello!");
}
void another()
{
puts("It's me - another function.");
}
int main(void)
{
hello();
hello();
hello();
another();
hello();
another();
return 0;
}
