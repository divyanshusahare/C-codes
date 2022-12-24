//A five-digit number is entered through the keyboard. Write a 
//program to obtain the reversed number and to determine 
//whether the original and reversed numbers are equal or not

#include<stdio.h>
int main()
{
	long int a,num1,num2,num3,num4,num5,rev;
	printf("ENter the five digit number");
	scanf("%d",&a);
	num1 = a%10;
	a = a/10;
	num2 = a%10;
	a = a/10;
	num3 = a%10;
	a = a/10;
	num4 = a%10;
	a = a/10;
	num5 = a%10;
	a = a/10;
	rev = num1*10000+num2*1000+num3*100+num4*10+num5*1;
	printf("reverse=%ld");
	if(rev==a)
	{
	printf("reverse = %ld");
	}
	else
	{
	printf("these is not original number");
	}
	return 0;
	
	
}
