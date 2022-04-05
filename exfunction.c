#include<stdio.h>

extern int i;
int j = 56;

extern void demo();
int main()

{
	printf("inside main\n\n\n");
	printf("value of j:%d\n",j);
	printf("value of i:%d\n",i);

	demo();
	
	return 0;
}
