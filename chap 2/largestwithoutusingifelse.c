 

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the the value of b");
	scanf("%d",&b);
	a^((a^b)&-(a<b));
	printf("the largest between number is =%d,%d",a,b);
}
