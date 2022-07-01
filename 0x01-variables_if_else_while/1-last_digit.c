#include <stdlib.h>
#include <time.h>
/*more headers goes there*/

/*betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n= rand() - RAND_MAX / 2;

int ld = n%10;

if(ld>5)
printf("Last digit of %d is and is greater than 5 \n",ld);
else if(ld==0)
printf("Last digit of %d is and is 0\n",ld);
else if(ld<6)
printf("Last digit of %d is and is less than 6 and not 0\n",ld);
  /* your code goes there */
return (0);
}
