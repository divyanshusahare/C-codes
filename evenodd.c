//find the even and odd number
#include<stdio.h>
int main()
{
	int i=1,sum=0,sum1=0;
	printf("the even and odd number is");
	while(i<=100)
	{
	
	if(i%2==0)
	{
	 	sum = sum+i;
	}
	else
		sum1 = sum1+i;
	i++;
	}
	printf("\nthe even number is = %d ",sum);
	printf("\nthe odd number is = %d ",sum1);
}

