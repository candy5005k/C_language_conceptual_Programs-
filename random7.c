#include<stdio.h>
///////////////////////////////////////////////////
//input :take size in cm  
// outpot : covert cm in into km and metere
//////////////////////////////////////////////////
int main()
{
	double iCm = 0;
	
	double iKm = 0;
	double im  =0;
	

	
	
	printf("Enter the number in CM: \n");
	scanf("%lf",&iCm);
	
	im = iCm/100;
	
	printf("the cm in %lf Meter\n",im);

	iKm = iCm/1000;
	
	printf("the cm in %lf kilometer\n",iKm);

	return 0;
}
