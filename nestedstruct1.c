#include<stdio.h>

struct demo
{
	int i ;
	struct demo *ptr ; 	

};

int main()
{
	struct demo dobj1;
	struct demo dobj2;
	struct demo dobj3;

	dobj1.i = 21;		
	dobj1.ptr = &dobj2;

	dobj2.i = 23;
	dobj2.ptr = &dobj3;

	dobj3.i = 24;
	dobj3.ptr = NULL;
	
	printf("%d\n",dobj1.ptr->ptr->ptr->i);
	
	
	return 0;
}
