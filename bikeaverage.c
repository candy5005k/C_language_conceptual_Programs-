#include<stdio.h>

int main()
{
	int iKm =0;
	int pLiter =0;
	float Avg = 0;
	printf("input total distance in km :\n");
	scanf("%d",&iKm);
	
	printf("input total fuel spent in liters:\n");
	scanf("%d",&pLiter);
	
	Avg = iKm/pLiter;
	
	printf("Average consumption (km/lt): %f",Avg);
	
	return 0;
}
