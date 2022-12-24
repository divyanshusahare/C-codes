#include<stdio.h>
int main()
{
    int num,i,sum=0,x;
    printf("Enter the no of terms:");
    scanf("%d",&num);
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(i=1;i<=num;i++)
    {
    sum=(sum+i)*x;
	}
    printf("\nSum of series=%d",sum);
    
}
