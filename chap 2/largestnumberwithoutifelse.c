#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	(a>b==c)||(b>c==a)||(c>a==b);printf("the largest number is%d",a,b,c);
}
