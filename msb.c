#include<stdio.h>

int main()

{
	int num;
	int msb;
	printf("enter thr number\n");
	scanf("%d",&num);
	
	msb = 1 <<(32-1);
	
	if(num & msb)
	{
		printf("MSB %d is set of(1)",num);
	
	}
	else
	{
		printf("MSB %d is set of(0)",num);
	}

	return 0;
}
