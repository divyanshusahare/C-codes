//write  a program to find out LCM of two number
#include<stdio.h>
int main()
{
	int num1,num2,lcm,max;
	printf("enter the 1number");
	scanf("%d",&num1);
	printf("enter the 2number");
	scanf("%d",&num2);
	max=num1>num2?num1:num2;
	while(1)
	{
		if(max%num1==0&&max%num2==0)
		{
			lcm=max;
			break;
	    }
	    max++;
		}
		printf("LCM=%d",lcm);
		return 0;
	}
	


 
