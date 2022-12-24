#include<stdio.h>
int main()
{
	int year,total_days;
	printf("Enter the year = ");
	scanf("%d",&year);
	total_days=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400+1;
	if(total_days%7==0)
	{
		printf("SUNDAY");
	}
	else if(total_days%7==1)
	{
		printf("MONDAY");
	}
	else if(total_days%7==2)
	{
		printf("TUESSDAY");
	}
	else if(total_days%7==3)
	{
		printf("WEDNESDAY");
	}
	else if(total_days%7==4)
	{
		printf("THursday");
	}
	else if(total_days%7==5)
	{
		printf("Friday");
	}
	else if(total_days%7==6)
	{
		printf("saturday");
	}
 
	return 0;
}
