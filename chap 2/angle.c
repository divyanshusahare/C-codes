#include<stdio.h>
int main()
{
	float angle,a1,a2,a3;
	printf("Enter the 1 angle = ");
	scanf("%f",&a1);
	printf("Enter the 2 angle = ");
	scanf("%f",&a2);
	printf("Enter the 3 angle = ");
	scanf("%f",&a3);
	angle = a1+a2+a3;
	if(angle==180)
	{
		printf("THe angle is valid=%f",angle);
		
	}
	else 
	{
		printf("The angle is invalid =%f",angle);
	}
	return 0;
}
