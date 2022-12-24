#include<stdio.h>
int main()
{
	float handloon,mill,bill,amount;
	float discount=0.0; 
	printf("enter the purchase amount handloon cloths");
	scanf("%f",&handloon);
	printf("enter the mill clouths");
	scanf("%f",&mill);
	amount = handloon+mill;
	if(amount>0&&amount<=100)
	
	bill = mill+handloon-handloon*5;

    
	else if(amount>100&&amount<=200)
	bill = mill-0.05*mill + handloon-0.075*handloon;
	else if(amount<201&&amount>300)
	bill =mill-0.075*mill + handloon-0.1*handloon;
	else
	bill =mill-0.01*mill + handloon-0.15*handloon;
	printf("the bill is=%f",bill);
}
