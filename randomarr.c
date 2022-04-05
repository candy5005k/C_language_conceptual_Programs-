 #include<stdio.h>
 
 
int main()
{
 	int num[]={10,20,30,[0] = 3};	 //int Arr[]={10,20,30,[0] = 3};  Arr[0] ..o/p=3 yeti a 
	
	
	printf("%d\n",num[1]);
	
	printf("%d\n",num[0]);
	
	printf("%d\n",num[1]);
	
	printf("%u\n",num[2]);
	
	return 0;
	
}
