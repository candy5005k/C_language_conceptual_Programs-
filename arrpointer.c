 #include<stdio.h>
 
 
int main()
{
	int Arr[5]={10,20,30,40,50}; 
	
	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[4]);
	printf("%u\n",Arr);
	printf("%d\n",&Arr);
	printf("%u\n",&(Arr[0]));
	printf("%u\n",&(Arr)+1);
	printf("%u\n",sizeof(Arr));
	printf("%d\n",sizeof(Arr[0]));
	printf("%d\n",*(Arr+2));
	printf("%d\n",Arr[2]);
	printf("%d\n",2[Arr]);
	printf("%d\n",*(2+Arr));
	
	
	return 0;
	
}
