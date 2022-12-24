#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=30;i++)
	{
		for(k=29;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}

	for(i=1;i<=25;i++)
	{
		for(k=24;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}
	for(i=1;i<=20;i++)
	{
		for(k=19;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}
	for(i=1;i<=15;i++)
	{
		for(k=14;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)	
		printf(" *");
		printf("\n");
	}
}	
