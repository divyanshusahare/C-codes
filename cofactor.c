#include<stdio.h>
int main()
{
	int num1,i=2;
	printf("enter the 1number");
	scanf("%d",&num1);
	 
	
	while(num1>1)
	{
		if(num1%i==0)
		{
			printf("%4d",i);
			num1=num1/i;
			continue;
		}
		
	    i++;
		}
	
	
	}

