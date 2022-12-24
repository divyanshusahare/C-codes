//write  a program to find out HCF of two number
#include<stdio.h>
int main()
{
	int num1,num2,hcf=1,min,i=2;
	printf("enter the 1number");
	scanf("%d",&num1);
	printf("enter the 2number");
	scanf("%d",&num2);
	min=num1<num2?num1:num2;
	while(i<=min)
	{
		if(min%i==0&&min%i==0)
		{
			hcf=i;
			
	    }
	    i++;
		}
		printf("hcf=%d",hcf);
		return 0;
	}
	


