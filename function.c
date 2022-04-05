

/*hard core program*/


//ghara pasun dukancha program 

#include<stdio.h>

int multiply(int No1,int No2) //*********function defination***********
{	//function chya block chi survat
	
	int ans = 0;	//local variable of addition 
	
	ans = No1*No2; 	//multiplication kela ALU (arithmatic logical unit)
	
	return ans;	//jyane call kela tyala value dyy
 	
}	//block cha shewat

//APLA GHAR
int main()	//ithun program run hoto
{		//block chi survat

	int A = 10, B = 500, c = 0;	//local variable of main // C mhanje rikami pishvi
	
	c = multiply(A,B); 		//function la call //***********function declration***********
	
	printf("%d\n",c); 		//gharchyana bolun snaga kay zhala te
	
        return 0;			//convince os succesfull 

}
