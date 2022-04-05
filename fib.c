#include<stdio.h>

int main()
{
	int iValue = 0;
	int iCnt = 0;
/////////////////////////////////////////
//to start the counter we have to addition 2  iNo1=0 ,iNo2=1
/////////////////////////////////////////
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 0;
 	printf("Enter your fibonacci Number:\n");
 	scanf("%d",&iValue);
/////////////////////////////////////////
//logic iNo1 = 0, iNo2 = 1,
//0+1=1,1+1=2,2+1=3,2+3=5..................
/////////////////////////////////////////

 	for(iCnt=1;iCnt<=iValue;iCnt++)
 	{
		printf("%d\n",iNo1); 
			
 		iNo3=iNo1+iNo2;
 		iNo1=iNo2;
 		iNo2=iNo3;
 	
 	}


	return 0;
}
