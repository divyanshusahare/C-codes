//If the three sides of a triangle are entered through the
//keyboard, write a program to check whether the triangle is
//isosceles, equilateral, scalene or right angled triangle.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the side of triangle=");
	scanf("%d",&a);
	printf("enter the second side of triangle=");
	scanf("%d",&b);
	printf("enter the third triangle=");
	scanf("%d",&c);
	if(a==b&&b==c&&c==a)
	
		printf("the tringle is equilateral");
	
	else if(a==b||b==c||c==a)

		printf("the triangle is isosceles");
	 
	else
	{
		if(c*c==a*a+b*b||b*b==a*a+c*c||a*a==b*b+c*c)
			printf("The triangle is right angle triangle");
			
			else
				printf("the triangle is scalene");
}
}

