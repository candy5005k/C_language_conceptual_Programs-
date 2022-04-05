#include<stdio.h>

int main()
{

	int Arr[10];    //the size of Arr array is 40               ///defination of array
	int Brr[]={14,12,13,16,18};
	int Crr[5]={52,54,56,96,87};
	
	int Drr[5][3];
	int Err[5][3]={10,20,3,45,65,56,78,78421,45};

 	printf("Drr 2d array data:%d\n",Drr[2][2]); 
 	printf("Err 2d array data:%d\n",Err[0][8]); 
 	printf("Arr array data:%d\n",Arr[0]);
 	printf("Arr array address:%u\n",&Arr); 
 	
 	printf("Arr array size:%d\n",sizeof(Arr)); 
 	printf("Brr array size:%d\n",sizeof(Brr)); 
 	printf("Crr array size:%d\n",sizeof(Crr)); 
 	printf("Drr array size:%d\n",sizeof(Drr)); 
 	printf("Err array size:%d\n",sizeof(Err)); 
 	
 	
 
 	

	return 0;
}


//output

/*omkar@omkar-Inspiron-15-3567:~/Desktop/c$ gcc array3.c -o uexe -w
omkar@omkar-Inspiron-15-3567:~/Desktop/c$ ./uexe
Drr 2d array data:0
Err 2d array data:45
Arr array data:0
Arr array address:3450492000
Arr array size:40
Brr array size:20
Crr array size:20
Drr array size:60
Err array size:60
*/
