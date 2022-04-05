#include<stdio.h>
int main()
{
	int arr[] = {10,20,30,40};
	int *p = arr;
	int *q = arr+1;
	int ans = *q - *p;
		
	printf("%d\n",arr+1);
	printf("%d\n",arr);


	printf("%d\n",*q-*p);


	return 0;
}
