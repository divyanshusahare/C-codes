#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=31;i++)
	{
		for(j=1;j<=30-i;j++)
		printf(" * ");
		printf("  \n");
	}
}
