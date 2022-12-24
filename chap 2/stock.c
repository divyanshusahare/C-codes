//The policy followed by a company to process customer orders
//is given by the following rules:
//(a) If a customer order is less than or equal to that in stock
//and has credit is OK, supply has requirement.
//(b) If has credit is not OK do not supply. Send him
//intimation.
//(c) If has credit is Ok but the item in stock is less than has
//order, supply what is in stock. Intimate to him data the
//balance will be shipped.
//Write a C program to implement the company policy.

#include<stdio.h>
int main()
{
	int ordar,stock=10000;
	char cridit;
	printf("enter the customer order");
	scanf("%d",&ordar);
	printf("enter the customer(Y/N)");
	cridit=getch();
	if(ordar<=stock&&cridit=='y'||cridit=='Y')
		printf("the order is successful");
	else if(cridit=='N'||cridit=='n')
		printf("the order is canclled");
		
	else if(ordar>stock&&cridit=='y'||cridit=='Y')
		printf("dear costumer stock quentity = %d id delivered remain order =%d will be delevred soon",stock,ordar);

}
