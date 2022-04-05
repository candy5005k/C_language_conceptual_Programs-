#include<stdio.h>

int main ()
{
	int i,n;
	
	printf("enter the number\n");
	scanf("%d",&n);

	
      (n % 2 == 0  ) ? printf("%d is even ",n): printf("%d is odd",n);      //ternery operator
	return 0;
}
