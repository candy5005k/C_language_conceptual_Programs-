#include<stdio.h>
int main()
{
	int drr[3+2] = {7+9,3*2,78,9-1};
	int arr[3] = {21,43,54};
	
	int x = 0;
	
	x = arr[2]+21+arr[0];
	x++;
	printf("the x :%d\n",x);
	
	printf("%d\n",drr[0]);
	printf("%d\n",drr[1]);
	printf("%d\n",drr[2]);
	printf("%d\n",drr[3]);
 
	printf("%d\n",sizeof(drr));
	return 0;
}
