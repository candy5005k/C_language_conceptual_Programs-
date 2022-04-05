#include<stdio.h>

int main()
{
	int no = 10;
	
	int ans = 0;
	
	int no1 = 10;
	
	int ans1 = 0;
	
	printf("post:\n");
	
	ans = no++;
	printf("no:%d\n",no);//11
	//printf("ans:%d\n",ans);//10
	
	
	printf("pre:\n");
	
	ans1 = ++no1;
	printf("no1:%d\n",no1);//11
	//printf("ans1:%d\n",ans1);//11
	


	return 0;
}
