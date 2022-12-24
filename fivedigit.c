// five digit number
#include<stdio.h>
int main()
{
	int digit,sum=0,rem;
	printf("Enter the five digit number");
	scanf("%d",&digit);
	while(digit>0)
	{
		rem=digit%10;
		digit=digit/10;
		sum=sum+rem;
	}
	printf("addition of number is %d",sum);
}
