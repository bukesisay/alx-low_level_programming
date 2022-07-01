#include<stdio.h>
/**
*main - is function
*Return: ch
*/
int main(void)

{
char ch = 'a';

while (ch <= 'z' && ch!= 'q' && 'e')
{
putchar(ch);
ch++;
}
putchar('\n');
return (ch);
}
