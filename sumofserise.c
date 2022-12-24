#include<stdio.h>
int main()
{
int num,i,x,n,sum=0;
printf("\nenter no.of series in x =");
scanf("%d",&num);
for(i=1;i<=num;i++)
sum=sum+i;
printf("the sum of series is=%dx",sum);
return 0;
}

