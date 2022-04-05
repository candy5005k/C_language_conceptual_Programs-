#include<stdio.h>
//static int A = 40;
extern int y;
extern void shake(); //extern function from second file////declare extern function 
int divide(int N1,int N2);//function arguments//forward declration

int main()
{	
	int A = 4;
	int B = 4;
	int bet = 0;
		
	int Arr[]={40,50,60,70,80};
	
	printf("inside main\n\n");
	printf("the value of extern key word:%d\n\n",y);
	  
	printf("the values in array:%d\n",Arr[0]);//array is in sequential and index format
	printf("the size of array:%d\n",sizeof(Arr));
	printf("the address of array:%u\n\n",&Arr);


	bet = divide(A,B);
	
	printf("the div value of bet: %d\n",bet);
	
	shake();//******function call
	
	demo();
	demo();
	demo();
	
	return 0;
}
int divide(int N1,int N2) //function parameter
{	

	printf("inside fun\n\n");

	int Ans = 0;
	Ans = N1/N2;
	
	return Ans;
}
void demo()
{
   //printf("inside 3rd function\n");
	static int m = 100 ;	
	m = m +1;
	printf("the value increment by 1 :%d\n",m);

}


/*************************************************OUTPUT***********************************************************
omkar@omkar-Inspiron-15-3567:~/Desktop/c$ gcc legend.c legend2.c -o bossexe -w
omkar@omkar-Inspiron-15-3567:~/Desktop/c$ ./bossexe
inside main

the value of extern key word:60

the values in array:40
the size of array:20
the address of array:2563733520

inside fun

the div value of bet: 1
hii i'm at 2nd file

the value increment by 1 :101
the value increment by 1 :102
the value increment by 1 :103
*/
