#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,dim,sum=0;
	float avg;
	printf("Enter the dim of a student in a class =");
	scanf("%d",&dim);
 	for(i=0;i<=dim;i++)
 	{
 		printf("enter the mark of student [%d]",i+1);
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<=dim;i++)
	 {
	 
	 sum = sum+a[i];
	 avg = (float)sum/dim;
}
	 printf("sum obtain is %d",sum);
	 printf("\navg obtain by the class is %f",avg);
	 
 	
 	
	 
 	
 

		 
			 
}
