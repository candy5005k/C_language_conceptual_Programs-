#include<stdio.h>//-1
#include<stdlib.h>//-1
int main()//0
{
	
	int size = 0;//1			//the comments number is steps to follows to write code 
	int *ptr = NULL;//5
	
	printf("enter the number element:");//2
	scanf("%d",&size);//3
	
	ptr = (int *)calloc(size , sizeof(int));//4		//calloc dynamic memory allocation
	if(ptr == NULL)//6
	{
	   printf("error\n");//7
	
	}
	else//8
	{
	    printf("\n");//10
		
	}
	free(ptr);//11
	return 0;//0
}
