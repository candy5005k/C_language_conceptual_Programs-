#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////
//input : take two sizes of length and width
//output : the unit of rectangle
//authur : OMKAR NVANTH KADAM
//Date : 09/03/2022
//description :take lenth and width from user to calculate perimeter of ractangle
///////////////////////////////////////////////////////////////////////////////////////
int main()
{

	int iLength = 0;
	int iWidth  = 0;
	
	int iUnit   = 0;
	
	printf("Enter the length of rectangle: \n");
	scanf("%d",&iLength);
	
	printf("Enter the width of rectangle: \n");
	scanf("%d",&iWidth);
	
	iUnit = 2*(iLength+iWidth);
	
	printf("the size of rectangle in :%d unit\n",iUnit);

	return 0;
}
