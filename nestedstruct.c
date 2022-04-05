#include<stdio.h>


struct demo
{
	int i;
	int f;

};

struct hello
{
	int s;
	float fs;
	
	struct demo dobj;


};

int main()
{

	struct hello hobj;
	
	hobj.s = 51;
	hobj.fs = 10.20;
	hobj.dobj.i = 30;
	hobj.dobj.f = 60.20;

}
