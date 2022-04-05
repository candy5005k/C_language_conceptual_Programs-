#include<stdio.h>
int main()
{
	char Brr[] = "omkar";
	char *ptr = Brr;
	 

	
	for(*ptr = Brr[0];*ptr!='\0';ptr++)
	{
	
	  printf("%c",*ptr);
	  
	
	}

	return 0;
}
