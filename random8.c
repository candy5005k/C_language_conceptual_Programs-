#include<stdio.h>
 
int main()
{
	 
	 int iYear = 0;
	 int iWeek = 0;
	 int iDays = 0;	 	

	
	
	printf("Enter the number days: \n");
	scanf("%d",&iDays);
	 
	iYear = iDays/365;
	 
	iWeek = (iDays % 365)/7;
	
	iDays  =  iDays - ((iYear * 365) + (iWeek* 7));
	
	
	printf("year %d:week %d  days:  %d\n",iYear,iWeek,iDays);
 
	return 0;
}
