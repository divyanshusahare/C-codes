#include<stdio.h>
int main()
{
	int num1,i=1,fact=1;
	printf("Enter the number = ");
	scanf("%d",&num1);
	while(i<=num1)
	{
	
	fact=fact*i;
	i++;
	}
	
	printf("the fact is %d ",fact);
	
}
