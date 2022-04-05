#include<stdio.h>

int main()
{
	int i = 20;
	char ch = 'A';
	float f = 20.20;
	double h = 78.895;
	long double gh = 1.212123223;
	char str[]="omkar";
	
	printf("value of %d\n",i);
	printf("value of %c\n",ch);
	printf("value of %f\n",f);
	printf("value of %lf\n",h);
	printf("value of %Lf\n",gh);
	printf("the address of %u\n",&i);
	printf("the size of i integer:%d\n",sizeof(i));
	printf("the size of ch :%d\n",sizeof(ch));
	printf("value of %o\n",i);
	printf("value of %x\n",i);
	printf("value of %p\n",i);
	printf("the name of string is %s\n",str);
	


	return 0;
}
