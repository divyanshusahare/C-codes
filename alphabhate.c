#include<stdio.h>
int main()
{
	char a=0,ch=0;
	int count=0;
	printf("enter the sentence=");
	scanf("%d",&a);
	while(ch==a)
	{	ch++;
		if(ch>=0)
		{
		
		printf("\nword = ");
		count = count+ch;
		printf("%d",count);
		
		}
		
		else
			printf("enter the only char");
			
	}
	
}
