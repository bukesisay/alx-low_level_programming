#include<stdio.h>
#include <string.h>
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
if (!strcmp(&ch,&'e'))
putchar(ch);
ch++;
}
putchar('\n');
}
return (0);
}
