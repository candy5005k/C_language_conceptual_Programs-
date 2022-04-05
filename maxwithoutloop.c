#include<stdio.h>

int main()
{
	int num1, num2, num3, max;

	printf("Enter the 1st Number\n");
	scanf("%d",&num1);
	
	printf("Enter the 2st Number\n");
	scanf("%d",&num2);
	
	printf("Enter the 3rd Number\n");
	scanf("%d",&num3);
	
	//ternery number
	
	max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
	
	printf("%d ,%d, %d = %d is greater number",num1,num2,num3,max);
	return 0;
}
