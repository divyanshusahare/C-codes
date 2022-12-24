//If cost price and selling price of an item is input through the 
//keyboard, write a program to determine whether the seller has 
//made profit or incurred loss. Also determine how much profit 
//he made or loss he incurred.

#include<stdio.h>
int main()
{
	float cost_prise,selling_prise,profit_prise;
	printf("enter the selling_prise , enter the cost_prise = ");
	scanf("%f %f",&selling_prise,&cost_prise);
	
	if(selling_prise>cost_prise)
	{
		profit_prise = selling_prise-cost_prise;
		printf("profit",profit_prise);
	
	}
	else
	{
		printf("loss");
	}
}

