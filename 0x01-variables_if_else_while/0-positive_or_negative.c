#include <stdlib.h>                                                                                                              
#include <time.h>                                                                                                                
/* more headers goes there */                                                                                                    
                                                                                                                                 
/* betty style doc for function main goes there */                                                                               
int main(void)                                                                                                                   
{                                                                                                                                
  int n;                                                                                                                         
  srand(time(0));                                                                                                                
  n = rand() - RAND_MAX / 2;                                                                                                     
                                                                                                                                 
  if (n>0)                                                                                                                       
    {                                                                                                                            
      printf ("%d is positive number",n);                                                                                        
   }                                                                                                                            
  if (n=0)                                                                           {                                                                       
    printf ("%d is positive number",n);
      }
  else                                                                                                                     
    {                                                                                                                      
      printf ("%d is a negetive number", n);                                                                               
    }                                                                           /* your code goes there */                                                                                            
  return (0);                                                                                                              
}                                                                                                                          
Footer                                                                                                                           
© 2022 GitHub, Inc.                                                                                                            
Footer navigation
 
