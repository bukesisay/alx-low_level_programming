#include<stdio.h>

int main(void)
{

  char ch='a';
  char CH='A';
  
  while(ch <= 'z')
    {
      putchar("%c ", ch);
      ch++;

    }
  while(CH <= 'Z')
    {
      putchar("%c ", CH);
      CH++;
    }
  return 0;

}
