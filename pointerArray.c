#include<stdio.h>

int main()
{
	int Arr[5] = {1110,20,30,40,50};

	int *p = &Arr[0];
	int *q = &Arr[4];
	
	
	printf("the value of p :%d\n",p);
	 
	p=p+3;	

	printf("the value of p :%d\n",p);
	
	printf("the value of q :%d\n",q);
	 
	q=q-3;
	
	printf("the value of q :%d\n",q);
	
	return 0;
}
	
/*omkar@omkar-Inspiron-15-3567:~/Desktop/c$ gcc pointerArray.c -o mtexe -w
omkar@omkar-Inspiron-15-3567:~/Desktop/c$ ./mtexe
 the value of p :1064449504
the value of p :1064449516
the value of q :1064449520
the value of q :1064449508

omkar@omkar-Inspiron-15-3567:~/Desktop/c$ ^C
omkar@omkar-Inspiron-15-3567:~/Desktop/c$ */
