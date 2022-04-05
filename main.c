#include<stdio.h>
#include"omkar.h"
void fun();
int main()
{	
	struct demo obj;
	
	int Arr[MAX];
	void *ptr = NULL;
		
	Arr[0] = 10;
	Arr[1] = 2000;
	
	ptr = &Arr[3];
	 
	
	no = no + MAX;
	printf("the index value of 3:%d\n",Arr[3]);
	printf("the index value of 1:%d\n",Arr[1]);
	printf("array size:%d\n",sizeof(Arr));
	printf("inside main\n");
	printf("value of MACRO:%d\n",no);
	printf("the vlue of object:%d\n",sizeof(obj));
	fun();	
	
	return 0;
}



