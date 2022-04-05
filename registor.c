#include<stdio.h>

void Fun()
{			
	
	long int i;
	for(i=1;i>=0;++i)
	{
		printf("%ld\n",i);	
	
	}

}

int main()
{
	
	Fun();  				//here only call function not his data type 
	
	return 0;
}



/* 
void Demo()
{
	//register int ok; 			/*omkar@omkar-Inspiron-15-3567:~/Desktop/c$ gcc registor.c -o texe 
						registor.c: In function ‘Demo’:
						registor.c:7:2: error: address of register variable ‘ok’ requested
 					   	7 |  int *p = &ok;
      						|  ^~~
						*/
	
	//int *p = &ok;
	//register double d = 32.2;


