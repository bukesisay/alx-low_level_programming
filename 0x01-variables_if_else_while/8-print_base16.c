#include <stdio.h>

/**
 *main - is funtion
 *Return: ch
 */

int main(void)
{
int n = 0;
char a = 'a';
 while (n < 10)
{
putchar(n + '0');
n++;
}
 while ( a <= 'f')
   {
     putchar(a);
     a++;
   }
putchar('\n');
return (0);
}
