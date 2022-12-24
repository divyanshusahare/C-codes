#include<stdio.h>
int main()
{
	int quentity;
	float rate , discount,totalexp;
	printf("enter the total quentity = ");
	scanf("%d",&quentity);
	printf("enter the rate per quentity = ");
	scanf("%f",&rate);
	if(quentity>=1000)
		discount = 0.10;
	else discount = 0.0; 
		totalexp = quentity*rate-quentity*rate*discount;
		printf("total exp = %f",totalexp);
}
		
