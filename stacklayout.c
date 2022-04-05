#include<stdio.h>
//////////////////////////////////////
//Author:omkar navnath kadam
//Name:addition of two numbers
//Date:05/03/2022
//Description:it is used for addition 
//Input:iValue1,iValue2
//Output:iRet
//////////////////////////////////////

//////////////////////////////////////
//Declreation of Function 
/////////////////////////////////////

long int Addition(long int no1 ,long int no2);

//////////////////////////////////////
//Entery point Fuction of integer main
//////////////////////////////////////
int main()
{
	long int iValue1 = 0;
	long int iValue2 = 0;
	long int iRet    = 0;
	
	printf("Enter Your first number:\n");
	scanf("%ld",&iValue1);

	printf("Enter Your second number:\n");
	scanf("%ld",&iValue2);

	iRet = Addition(iValue1,iValue2);
	
	printf("Addition is %ld\n",iRet);

	return 0;
}
///////////////////////////////////////
//Desfination of Addition Function
//////////////////////////////////////
long int Addition(long int No1 ,long 			int No2)
{
	long int iAns = 0;
	
	iAns = No1 + No2;
	
	return iAns;

}
