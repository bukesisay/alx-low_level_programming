#include <stdlib.h>
#include <time.h>
/**
 *main - is function
 *Return: main
 */

int main(void)
{

int n;


srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) {
  print("%d is positie number", n);
}
if (n < 0) {
  print ("%d is negative number", n);
}
else
{
  print ("%d is zero", n);
}

return (n);
}
