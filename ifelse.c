#include<stdio.h>

int main()
{
	int Marks = 0; 	
	
	printf("enter your marks:\n");
	scanf("%d",&Marks);
	
	printf("entered marks:%d\n",Marks);
	
	if(Marks>=60)
	{
	   printf("first class\n");
	}
	else
	{
	    printf("not first class\n");
	}
	
	return 0;
}
