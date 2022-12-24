#include<stdio.h>
int main()
{
	int i,j,k,p;
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
		printf(" ");
		
		for(j=1;j<=i;j++)
		{
		p=p+1;
		printf("%4d ",p);
	}
		printf("\n");
	}
		
	
	
	
}
		
