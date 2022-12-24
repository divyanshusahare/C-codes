#include<stdio.h>
int main()
{
	int a,b,exp=1,sum=1;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	while(exp<=b)
	{
	sum=sum*exp;
	 
	exp++;
}
printf("the expo is =%d",sum);
}
