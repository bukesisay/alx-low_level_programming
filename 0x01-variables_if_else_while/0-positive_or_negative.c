#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - is function
 *Return: main
 */

int main(void)
{

int n;


srand(time(0));
n = rand() - RAND_MAX / 2;
 if (n > 0) printf("%d is positive",n);
 if (n < 0) printf("%d is negative",n);
 else printf("%d is zero",n);
return (n);
}
