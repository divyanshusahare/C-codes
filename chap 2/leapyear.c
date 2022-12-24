#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%100==0)
	 {
	 	if(year%400==0)
		{
	  	printf("the year is leap year",year);
     	}
	 	else
	 	{
	 	printf("the year is not leap year",year);
	 	}
	 }
	else
	 	{
		 
	 	if(year%4==0)
	 {
	 
		 printf("The year is leap year",year);
		}
		else
		{
		printf("The year is not leap year",year);
		}
	 }

