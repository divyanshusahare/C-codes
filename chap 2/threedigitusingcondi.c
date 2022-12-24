# include<stdio.h>
int main()
{

int a, b, c, num ;
printf("enter three digit = ") ;
scanf("%d %d %d", &a, &b, &c) ;
num = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
printf("\nThe biggest number is : %d", num) ;
}
