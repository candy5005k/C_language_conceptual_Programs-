#include<stdio.h>
//////////////////////////////////////////////
//input : taking two number
//outpot: addition of two numbers
//description: addition of any two numbers
//authur: omkar navanth kadam
//date: 09/03/2022
/////////////////////////////////////////////
int *ptr (int iAin ,int iBin);
int main()
{

	int iAin = 0;
	
	int iBin = 0;
	
	int Ret  = 0;
	printf("enter any two numbers :\n");
	scanf("%d%d",&iAin,&iBin);
	
	Ret = ptr(iAin,iBin);
	
	printf("Addition of two numbers :%d\n",Ret);


	return 0;
}
int *ptr(int iAin ,int iBin)
{

	int Ans;
	Ans = iAin + iBin;	

	return Ans;
}
