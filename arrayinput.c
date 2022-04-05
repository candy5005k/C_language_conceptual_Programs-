#include<stdio.h>
int main()
{
	int iSize = 0;
	int *iCnt = &iSize;
	
	printf("enter the size of array:\n");
	scanf("%d",&iSize);
	
	int Arr[iSize];
	printf("enter the elements of array:\n");
	
	for(*iCnt=0;*iCnt<iSize;iCnt++)
	{
//		printf("%d",*iCnt);
		printf("%d",Arr[iSize]);
	}

	return 0;
}







/*	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	//printf("the");
	   scanf("%d", Arr[iSize]);
	}
	//printf("the current array is :%d\n",Arr[iSize]);*/
