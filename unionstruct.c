#include<stdio.h>
#pragma pack(1)
struct demo
{
	int i ;
	int c;
	float f;
};

union hello
{
	int i;
	int j;
	float f;
	double d; 
};

int main()
{
	struct demo dobj;
	union hello hobj;
	
	printf("%d\n",sizeof(dobj));
	
	printf("%d\n",sizeof(hobj));
	
	dobj.i = 21;
	dobj.c = 65;
	dobj.f = 99.99;
	
	printf("the float :%f\n",dobj.f);
	
	printf("the int i :%d\n",dobj.i);
	
	hobj.i = 300;
	hobj.j = 64646;
	hobj.f = 45.65;
	hobj.d = 65.666;
	
	printf("the union int i  :%d\n",hobj.i);
	printf("the union int j  :%d\n",hobj.j);
	printf("the union float f  :%f\n",hobj.f);
        printf("the union double d  :%lf\n",hobj.d);
			
	return 0;
}
