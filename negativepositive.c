#include<stdio.h>
//-1	negative 
//1	positive
//0	zero
int main()
{
	int iNo = 0;
 	 
 	
 	printf("Enter the Number:\n");
	scanf("%d",&iNo);
	
	if(iNo<0)
	{
	printf("Number is Negative:\n");
	}
	else if(iNo>0)
	{
	printf("Number is Positive:\n");
	}
	else
	{
	printf("the Answer is zero\n");
	}
	return 0;
}
