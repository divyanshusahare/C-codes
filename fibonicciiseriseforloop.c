#include<stdio.h>
int main()
{
	int term ,i=1,f,f1=0,f2=1,sum=1;
	printf("Enter the number of terms = ");
	scanf("%d",&term);
	printf("the fibonicci serise is = ");
	printf("%4d %4d",f1,f2);
	for(i=1;i<=term-2;i++)
	{
		f=f1+f2;
		printf("\n%d",f);
		sum = sum+f;
		f1=f2;
		f2=f;
		
   }
    
	printf("\nthe sum of number is %d",sum);
}
