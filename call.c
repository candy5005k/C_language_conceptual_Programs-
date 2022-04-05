#include<stdio.h>

int main()

{
	printf("Inside main\n");

	Fun();


	printf("End of Main\n");
	return 0;
}
void Gun()
{
	printf("Inside Gun\n");
	

	printf("End of Gun\n");

}
void Fun()
{
	printf("Inside fun\n");

	Gun();
	
	printf("End of fun\n");
}
