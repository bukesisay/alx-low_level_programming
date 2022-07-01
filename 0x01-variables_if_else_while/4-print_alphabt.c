#include<stdio.h>
/**
*main - is function
*Return: ch
*/
int main(void)

{
char ch = 'a';
if (ch != 'q')
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
return (ch);
}
