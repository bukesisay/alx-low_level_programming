#include<stdio.h>
/**
*main - is function
*Return: ch
*/
int main(void)

{
char ch = 'a';
{
while (ch <= 'z')
{
  if ((ch!='e') && (ch!='E'))
putchar(ch);
ch++;
}
putchar('\n');
}
return (0);
}
