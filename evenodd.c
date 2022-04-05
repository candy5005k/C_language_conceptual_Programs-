#include<stdio.h>
//even 2,4,6
//odd   1,3,5
int main()
{
	int iNo = 0;
 	 
 	
 	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	if(iNo % 2 == 0)
	{
	printf("Number is even:\n");
	}
 
	else
	{
	printf("the Answer is odd\n");
	}
	return 0;
}
