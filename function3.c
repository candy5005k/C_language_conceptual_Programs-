#include<stdio.h>

int Addition (int ,int);

int main()
{
	int A = 25;
	int B = 30;
	int C = 0;
	
	C=Addition(A,B);
	
	printf("%d\n",C);

	return 0;
}

int Addition (int No1, int No2)
{
	int (*fptr)(int,int);
		
	int ret = 0;
	
	fptr = Addition;
	
	ret = No1 + No2;
	
	return ret;
}
