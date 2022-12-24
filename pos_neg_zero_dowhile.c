#include<stdio.h>
int main()
{
	char ch;
	int pos=0,neg=0,zero=0,num;
	do
	{
		printf("\nEnter the number=");
		scanf("%d",&num);
		if(num>=0)
		pos++;
		else if(num<=0)
		neg++;
		else
		zero++;
		printf("\nDo you want continue agan(Y/N)");
		ch=getche();
	
	}
	while(ch=='Y'||ch=='y');
	printf("\ntotal posi = %d \n total neg = %d total zero = %d",pos,neg,zero);
}
