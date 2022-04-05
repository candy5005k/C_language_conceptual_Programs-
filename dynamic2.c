#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	 
	int *ptr = NULL;			//DUMMY CODE
	 
	
	ptr = (int *)calloc(size , sizeof(int));

	ptr =(int *)realloc(ptr , 7* sizeof(int));		//realloc dynamic memory allocation
	
	ptr =(int *)realloc(ptr , 3*sizeof(int));	
	
	free(ptr);
	return 0;
}
