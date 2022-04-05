#include<stdio.h>
//class peper time table 
//1	8am
//2	9am
//3	10am
//4	11am
//5	12pm
int main()
{
	int iStd = 0;
	
	printf("Enter your standerd:\n");
	scanf("%d",&iStd);

	if(iStd == 1)
	{
		printf("Your paper at 8 'o'clock");
	}

	else if(iStd == 2)
	{
		printf("Your paper at 9 'o'clock\n");
	}
	
	else if (iStd == 3)
	{
		printf("Your paper at 10 'o'clock\n");
	
	}
	
		
	else if (iStd == 4)
	{
		printf("Your paper at 11 'o'clock\n");
	
	}
		
	else if (iStd == 5)
	{
		printf("Your paper at 12 'o'clock\n");
	
	}
	else
	{
	
		printf(" Invalid standerd\n");
	
	}
	return 0;
}
