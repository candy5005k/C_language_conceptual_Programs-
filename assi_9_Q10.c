#include<stdio.h>

int main()
{
	int arr[]= {10,20,30,40,50};

	int *p  = arr;
	
	printf("1	%d\n",arr);
	printf("2	%d\n",&arr);
	printf("3	%d\n",p);
	printf("4	%d\n",*p);
	printf("5	%d\n",sizeof(arr));
	printf("7	%d\n",sizeof(arr[0]));
	printf("8	%d\n",sizeof(p));
	printf("9	%d\n",sizeof(*p));

	return 0;
}
