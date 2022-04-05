#include<stdio.h>
 
int main()
{
 	int iNo1 = 0;
	int iNo2 = 0;
 	printf("Enter your First number:\n");
	scanf("%d",&iNo1);
	
	
 	printf("Enter your Second number:\n");
	scanf("%d",&iNo2);
	
	if(iNo1>iNo2)
	{
	printf("First is greater than second :\n");
	
	}
	else if(iNo2>iNo1)
	{
	printf("Second is greater than First :\n");
	
	}
	
	else
	{
	printf("both number are equal:\n");
	
	}
	
	
	return 0;
}
