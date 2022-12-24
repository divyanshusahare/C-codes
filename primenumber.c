//enter any number WAP to check whether the number prime are not 
#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the any number");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
		
		
		printf("the number is %d  prime ",a);
		break;
	}
		else
			printf("the number is not %d prime",a);
			break;
		
	}
	return 0;	
}
