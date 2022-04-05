#include<stdio.h>

struct demo //structure declreation
{
	int iNo;
	float fValue;			//just non inistiallise
	//char cValue;			//in structure usinf keyword struct
	//double dValue; 		

};
int main()
{
	//structure object creation ????????????????????????????????????/struct key word 
	struct demo obj;
	//object initiallization
	obj.iNo = 56;
	obj.fValue = 6514.2;
	//obj.cValue = 'k'; 
	//obj.dValue = 56.56;
	
	printf("The Value of No:%d\n",obj.iNo);		//object will display written in this type obj.variable name
	printf("The value of fValue:%f\n",obj.fValue);
	//printf("The Value of cValue:%c\n",obj.cValue);
	//printf("The Value of dValue:%lf\n\n",obj.dValue);
	
	printf("The Size of Structure Demo :%d\n",sizeof(obj));
	
	return 0;
}






