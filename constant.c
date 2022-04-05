#include<stdio.h>

int main()
{
	int no1 = 100;

        const int no2 = 1055;// error denar const mule 

	no1++;
	printf("%d\n",no1);
	no2++;
	printf("%d\n",no2);
	//no2=300;
	return 0;
}
