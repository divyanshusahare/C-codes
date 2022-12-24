#include<stdio.h>
int main()
{
	int a[5][5]={{2,3,0},{4,2,5},{3,5,3},{1,2,3},{4,6,8}};
	int i,j;
	printf("the 2d array is\n ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
