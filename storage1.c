#include<stdio.h>

extern int c;

 int omkar()
{
	
	printf("%d\n",c);
	
	
}
 
 
void hello()
{
	auto int a =100;
	a++;
	printf("%d\n",a);
	
}

void Demo()
{
	static int b =100;
	b++;
	printf("%d\n",b);

}
 
 void see()
{
	register int c=101;
	c++;
	printf("%d\n",c);

}


int main()
{
	hello();	
	hello();
	
	Demo();
	Demo();
	
	see();
	see();
	
	omkar();
	omkar();

	return 0;
}
