#include<stdio.h>

int main()
{
	char ch = 'A';
	char *p = &ch;
	char **q = &p;
	char **x = &p;
	char *y = &ch;
	
	
	printf("1	%d\n",&ch);
	printf("2 	%d\n",p);
	printf("3 	%d\n",&p);
	printf("4	%d\n",&q);
	printf("5	%d\n",q);
	printf("6	%c\n",**x);
	printf("7	%c\n",**q);
	printf("8	%d\n",*q);




	return 0;
}
