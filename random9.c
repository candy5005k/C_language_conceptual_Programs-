#include<stdio.h>

int main ()
{
	int days,weeks,years;
	
	printf("enter days\n");
	scanf("%d",&days);
	
	years=days/365;
	
	weeks =(days-years*365)/7;
	
	days=(days-(years*365 + weeks*7));
	
	printf("years: %d, Weeks : %d ,days : %d",years,weeks,days);


	return 0;
}
