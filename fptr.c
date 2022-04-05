#include<stdio.h>

int Addition (int,int);     //global call ----------2

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	
	c=Addition(a,b);    //get called by this get return ans--------------3

	printf("%d\n",c);
	
	return 0;
}

int Addition(int No1,int No2)		////---------------1 /////call defination exactly like declreation no--2
{
	int ans = 0;
	//ans = No1+No2;
	int (*fptr)(int,int);
	
	fptr=Addition;
	
	ans=No1+No2;
	
	return ans;
}
