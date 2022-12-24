#include<stdio.h>
int main()
{
	int fact=1,num,i;
	printf("enter the any number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	
	fact=fact*i;
	
	printf("\nthe number is %d",fact);

}
}
