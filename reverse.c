//enter the any digit number writr a program reverse of the number
 // five digit number
#include<stdio.h>
int main()
{
	int digit,rev,rem,c,pow,temp;
	printf("Enter the five digit number");
	scanf("%d",&digit);
	temp=digit;
	while(digit>0)
	{
		c=c+1;
		temp=temp/10;
		
	}
	while(digit>0)
	{
		rem=digit%10;
		digit=digit/10;
		rev=rev+rem*pow(10,c-1);
		c--;
	}
	printf("reverse of number is %d",rev);
}
