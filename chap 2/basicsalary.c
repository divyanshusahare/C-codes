#include<stdio.h>
int main()
{
	float bs,da,hra,gross_salary;
	printf("enter the basic salary of employee = ");
	scanf("%f",&bs);
	if(bs>10000)
	{
	da = 0.9*bs;
	hra = 0.2*bs;
	}
	else 
	{
		da = 0.8*bs;
		hra = 0.15*bs;
    }
	gross_salary = bs+da+hra;
	printf("gross salary is =%f",gross_salary);

}

