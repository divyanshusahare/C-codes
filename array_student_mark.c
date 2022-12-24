#include<stdio.h>
int main()
{
	int a[100],i,dim;
	printf("Enter the dim of a student in a class =");
	scanf("%d",&dim);
	
	printf("enter the array = ");	
 	for(i=1;i<=dim;i++)
 	{
 		printf("enter the student of mark[%d]",i);
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<=dim;i++)
	 printf("Array of element is a [i]=%d",i,a[i]);
	 
 	
 	
	 
 	
 

		 
			 
}
