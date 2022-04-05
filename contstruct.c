#include<stdio.h>
#pragma pack(1)
struct demo
{
	int i ;
	char ch;
	float f ;
	int c;
};

int main()
{
	 const struct demo obj;
 
 	obj.i = 11;
	
	
	return 0;
}
