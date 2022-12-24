#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,r1,r2,c1,c2;
	printf("enter the matrix A:");
	scanf("%d %d",&r1,&r2);
	printf("enter the matrix B:");
	scanf("%d %d",&c1,&c2);
	printf("enter the element matrix A:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("\nenter the element of array a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		
	}
}
	if(r1==r2&&c1==c2)
	 {
	 
		for(j=0;j<c1;j++)
		c[i][j]=a[i][j]+b[i][j];
	
		{	
			printf("\nMatrix after addition is :");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				
			printf("%4d",c[i][j]);
			printf("\n");
		}
 
		}
	}
}
			 
