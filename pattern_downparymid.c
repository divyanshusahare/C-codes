#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=30;i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(j=i;j<=30;j++)	
		printf(" *");
		printf("\n");
	}
}
 
