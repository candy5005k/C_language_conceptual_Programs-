#include<stdio.h>

int Addition(int No1,int No2) 
{
	int ans=0;
	ans=No1+No2;
		
	return ans;
}
int main()
{
	int a= 10;
	int b= 11;
	int c= 0;
	
	c=Addition(a,b);
	printf("\n%d\n",c);
	
	return 0;

}
