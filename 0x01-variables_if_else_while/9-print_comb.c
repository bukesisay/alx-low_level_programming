#include <stdio.h>

/**
 *main - is funtion
 *Return: ch
 */

int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n%10);
 if (n < 9)
{
  putchar(',');
  putchar(' ');
  } n++;
}
putchar('\n');
return (0);
}
