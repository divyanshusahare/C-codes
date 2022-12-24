#include<stdio.h>
#include<math.h>
int main()
{
    int num,p=1,i;
	long int fact=1;
	float y,x,sinx=0;
    printf("Enter the value  of x in digree:");
    scanf("%f",&x);
    printf("Enter the value of num:");
    scanf("%d",&num);
    y=x;
    x=x*3.14/180;
    
    for(i=1;i<=num;i++)
    {
    	 
    	sinx=sinx+pow(-1,i+1)*pow(x,p)/fact;
    	p=p+2;
    	fact = p*(p-1)*fact;
	}
	printf("sin(%f)=%f",y,sinx);
	return 0;
}
