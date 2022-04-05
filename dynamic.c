#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int size = 0;		
	int *ptr = NULL;
	
	printf("enter the number element:");
	scanf("%d",&size);
	
	ptr = (int *)malloc(size * sizeof(int));		////malloc dynamic memory allocation
	if(ptr == NULL)
	{
	   printf("error\n");
	
	}
	else
	{
	    printf("The meomry succesfully allocated \n");
		
	}
	free(ptr);
	return 0;
}
