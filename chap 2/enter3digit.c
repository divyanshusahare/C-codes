#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three digit number=");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		printf("a=%d is a smallest",a);
		else
		printf("c=%d is a smallest",c);	
	}
	else
	{
		if(b<c)
		printf("b=%d is smallest",b);
		else
		printf("c=%d is the smallest",c);
	}
}
