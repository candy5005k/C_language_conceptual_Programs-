#include<stdio.h>

int main()

{
	int iValue = 112;
	char cValue = 'k';
	float fValue = 2.22;
	double dValue = 2.26;
	
	void *ptr = NULL; //its null mean o/p 0
	
	ptr = &iValue;
	printf("%d\n",*(int *)ptr);  //type casting 
	
	ptr = &cValue;
	printf("%c\n",*(char *)ptr);
	
	ptr = &fValue;
	printf("%f\n",*(float *)ptr);
	
	ptr = &dValue;
	printf("%lf\n",*(double *)ptr); //double lf data type 
	
	return 0;
}
