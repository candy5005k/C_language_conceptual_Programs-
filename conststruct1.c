#include<stdio.h>
#pragma pack(1)
struct demo
{
	const int i ;
	const int c;
};

int main()
{
	 struct demo obj = {};
 
 	obj.i = 11;
	
	
	return 0;
}
