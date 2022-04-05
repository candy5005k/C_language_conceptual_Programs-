#include <math.h>
#include <stdio.h>

int main(void)
{
  for(int i = 1; i < 5; i++)
     printf("pow(3.2, %d) = %lf\n", i, pow(3.2, i));  
  return 0;
}
