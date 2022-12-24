//write a program following opration on a number
//even/odd
//factroal
//prime/notprime
//exit
#include<stdio.h>
int main()
{
	int num1,num2,result,num,fact=1,i,a;
	int choice;
	printf("ENter\n1:enen/odd\n2:factroal\n3:prime/not prime\n4:exit=");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("enter the number");
			scanf("%d",&num1);
			if(num1%2==0)
			printf("the number is evern");
			else
			printf("the number is odd");
			break;
		
		case 2:
			printf("enter the any number");
	        scanf("%d",&num);
	        while(i<=num)
	        {
			fact=fact*i;
	        i++;
	    	}
	    	printf("the factreal is =%d",fact);
			break;	
		
		case 3:
			printf("enter the any number");
			scanf("%d",&a);
			for(i=2;i<=a;i++)
		{
			if(a%i==0)
			{
			printf("the number is not %d  prime ",a);
			break;
		}
			else
			printf("the number is  %d prime",a);	
			break;
		
		default:
		printf("exit");
	}
	
}
}
