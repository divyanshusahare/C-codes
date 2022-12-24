#include<stdio.h>
int main()
{
	int i,j,p=65;
	for(i=1;i<=26;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4c",p);
			p++;
		}
		p=65;
		printf("\n");
	}
}
