//enterv the  number till user wants & finally print total pos and nag and entread
#include<stdio.h>
int main()
{
	char ch = 'y';
	int a,pos=0,neg=0,zero=0;
	
	
	while(ch=='y'||ch=='Y')
	{
		printf("Enter the any number");
		scanf("%d",&a);
		 
		if(a>=0)
	
		pos++;
	
		
		else if(a<0)
		neg++;
		 
	
		else
		zero++;
		printf("\n do you conyinue agan (Y/N)?");
		ch=getche();
}
		printf("total pos=%d total neg=%d total zero = %d",pos,neg,zero);
		return 0;
}
	
