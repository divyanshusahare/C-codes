/* enter the total marks obtain by the students in a class. WAP to find
   out maxim um marks obtain by the class  */
   
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[100],dim,i,max;
	printf("enter number of students in class = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
		printf("\n enter marks obtained by students %d = " ,i+1);
		scanf("%d",&marks[i]);
	}
	max=marks[0];
	for(i=1;i<dim;i++)
	{
		if(max<marks[i])
		max=marks[i];
	}
	printf("\n maximum marks obtain by student = %d ",max);
} 
