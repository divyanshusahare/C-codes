#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,fact=1;
	float sum=1,x;
    printf("Enter the no of x:");
    scanf("%f",&x);
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(i=1;i<=num-1;i++)
    {
    	fact=fact*i;
    	sum=sum+pow(x,i)/fact;
	}
	printf("the sum of sreies is=%f",sum);
	return 0;
}
