#include<stdio.h>
int main()
{
	int i,j,num=1;
	 
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%4d",num);
		num=num+1;
		}
		printf(" \n");
	}
}
