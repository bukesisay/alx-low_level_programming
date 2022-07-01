#include<stdio.h>

int main()
{

  char ch='a';
  char CH='A';
  
  while(ch <= 'z')
    {
      putchar(ch);
      ch++;

    }
  while(CH <= 'Z')
    {
      putchar(CH);
      CH++;
    }
  return 0;

}
