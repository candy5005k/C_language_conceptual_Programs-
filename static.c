#include<stdio.h>

void demo()
{
	//printf("inside fun\n");
	int i = 10;
	static int j = 10;
	i=i+1;
	j=j+1;
	printf("The Value of i:%d\n",i);
	printf("The Value of j:%d\n",j);
	
}
int main()
{
	//printf("inside main\n");
	demo();
	demo();
	demo();
	demo();
	
	return 0;
}
