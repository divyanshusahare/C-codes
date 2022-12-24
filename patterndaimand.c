#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf("*");
		for(l=1;l<i;l++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=10;i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(j=9;j>=i;j--)	
		printf("*");
		for(l=8;l>=i;l--)
		printf("*");
		printf("\n");
	}
}
