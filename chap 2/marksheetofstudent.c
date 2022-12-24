#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("enter the mark sub1 =");
	scanf("%d",&m1);
	printf("enter the mark sub2 = ");
	scanf("%d",&m2);
	printf("enter the mark sub3 = ");
	scanf("%d",&m3);
	printf("enter the mark sub4 = ");
	scanf("%d",&m4);
	printf("enter the mark sub5 = ");
	scanf("%d",&m5);
	per = m1+m2+m3+m4+m5/5;
	if(per>=60)
	{
		printf("A+");
	}
	else
	{
		if(per>=50)
		printf("B+");
		else
		{
			if(per>=40)
			printf("c+");
			else
			printf("fail");
		}
		
	}
}
