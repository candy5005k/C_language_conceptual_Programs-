#include<stdio.h>
#include<stdlib.h>
int main()
{
	int no = 0;  //no
	void *ptr = NULL;
	
 	printf("Enter the 5 Elements:");
	scanf("%d",&no);
	
	
	ptr = (int *)malloc(no * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Not allocated");	
	}
	else
	{
		printf("All the elements are allocated\n");
	
	}
	
	free(ptr);
	return 0;
}
