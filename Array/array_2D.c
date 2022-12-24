#include<stdio.h>
int main()
{
	int a[3][3]={{2,3,0},{4,2,5},{3,5,3}};
	int i,j;
	printf("the 2d array is\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
