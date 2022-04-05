#include<stdio.h>

//static int omk=12;

void demo()
{
	//int omk=999;
	static int omk=999;
	omk++;
	printf("%d\n",omk);
}

int main ()
{

	demo();
	demo();
	
	return 0;
}
