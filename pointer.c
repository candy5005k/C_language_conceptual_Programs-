#include<stdio.h>

int main()
{
	  
	int no = 11;

	int *p = &no;

	int **q = &p;

	int ***a = &q;

	int ****b = &a;

	int *****c = &b;

	printf("the fetched value of a:%d\n",a);



	return 0;
}


