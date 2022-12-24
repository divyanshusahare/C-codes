//print all amstrong number if 


#include<stdio.h>
int main()
{
	int num=100,temp,a,b,c;
	while(num<9999)
	{
		temp=num;
		a=temp%10;
		temp=temp/10;
		b=temp%10;
		temp=temp/10;
		c=temp%10;
		temp=temp/10;
		if(c*c*c+b*b*b+a*a*a==num)
		printf("%4d",num);
		num++;
		
	}
}
