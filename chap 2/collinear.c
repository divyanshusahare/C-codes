#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float m1,m2;
	printf("enter the point A(x1,y1)");
	scanf("%f %f",&x1,&y1);
	
	printf("Enter the point B(x2,y2)");
	scanf("%f %f",&x2,&y2);
	
	printf("Enter the point B(x3,y3)");
	scanf("%f %f",&x3,&y3);
	
	m1 = (y2-y1)/(x2-x1);
	m2 = (y3-y2)/(x3-x2);
	
	if(m1==m2)
	{
		printf("The point are colliner");
	}
	else
	{
		printf("the point are not colliner");
	}
}
