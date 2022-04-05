#include<stdio.h>

int main()
{
	int num;
	
	printf("enter number: \n");
	scanf("%d",&num);
	
	if(num & 1)
	{
	
		printf("LSB %d number set(1)\n",num);
	}
	else
	{

		printf("LSB %d number set(0)\n",num);
	}
	return 0;
}
