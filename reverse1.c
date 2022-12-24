#include<stdio.h>
int main()
{
	int digit,rev,rem,c,pow,temp;
	printf("Enter the five digit number");
	scanf("%d",&digit);
	temp=digit;
	while(digit>0)
	{
		rem=digit%10;
		digit=digit/10;
		rev = rem+rev*10;
	}
	printf("the rev number is %d",rev);
}
