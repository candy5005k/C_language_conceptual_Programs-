#include<stdio.h>
int main()
{
	int arr[6]={10,20,30};
	int no = 2;
	
	printf("%d\n",arr[no]);
	
	
	printf("%d\n",arr[3-1]);
	
	
	printf("base address:%u\n",arr);
	
	
	printf("last address:%u\n",(&arr)+1);
	
	printf("%u..\n",&(arr[3]));
	
	printf("%u..\n",&(arr[5]));
	
	printf("%u\n",arr+3);

	printf("%d\n",arr[4]);
	
	printf("%u..\n",2[arr]);
	
	return 0;
}
