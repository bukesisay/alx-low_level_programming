#include<stdio.h>
/**
 *main- function
 *Return: main
 */
int main()
{

char ch='a';
char CH='A';
  
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while(CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (ch);

}
