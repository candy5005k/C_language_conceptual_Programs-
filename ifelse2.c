#include<stdio.h>
//entery amount of water park
//0 to 10   100
//10 to 40  500
//40 to --  300
int main()
{
 	auto int iAge = 0;	
 	
 	printf("enter your age:\n");
	scanf("%d",&iAge);
	
	if((iAge>=0) && (iAge<=10))
	{
	   printf("Your amount is 100\n");
	}
	else if ((iAge>10) && (iAge<=40))
	{
	   printf("Your amount is 500\n");
	   
	}
	else if (iAge>40)
	{
	   printf("Your amount is 300");
	
	}
	
	
	
	
	return 0;
}
