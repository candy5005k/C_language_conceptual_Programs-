#include<stdio.h>
int main()
{
	int n ;
	int i  ;
	int arr[i];
	printf("enter:\n");
	scanf("%d",&n);
	
	printf("%d elements\n",n);

	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
	  printf("\nElements in array are:");
	
	for(i=0;i<n;i++)
	{
	  printf("%d, ",arr[i]);
	
	}
	return 0;
}
