 #include<stdio.h>
 
int main()
{
 	int iStd = 0;
	
	printf("Enter your standerd:\n");
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		case 1:
		   printf("Your exam at 8 oclock\n");
		   break;
	
		case 2:
		   printf("Your exam at 9 oclock\n");
		   break;
		case 3:
		   printf("Your exam at 10 oclock\n");
		   break;
		case 4:
		   printf("Your exam at 11 oclock\n");
		   break;
		case 5:
		   printf("Your exam at 12 oclock\n");
		   break;
		default:
		   printf("Invalid standard\n");
		 
	}
	
	
	
	
	return 0;
}
