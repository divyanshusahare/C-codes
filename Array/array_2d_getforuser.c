#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,r,c;
	printf("enter the row less than 5:");
	scanf("%d",&r);
	printf("enter the coloumn less than 5:");
	scanf("%d",&c);
	printf("enter the array 2d array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("\nenter the element of array a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		
	}
}
		printf("\n array elements are: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
			printf("\n");
		}
		return 0;
		}
