#include<stdio.h>
int main()
{
	int fact=1,num,i=1;
	printf("enter the any number");
	scanf("%d",&num);
	while(i<=num)
	{
	
	fact=fact*i;
	i++;
}
	printf("\nthe number is %d",fact);
}
