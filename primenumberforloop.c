#include<stdio.h>
int main()
{
    int num,i,flag=1;
    printf("Enter any Integer:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
        flag=0;
        printf("\nThe given %d is not Prime.",num);
        break;
        }
    }
    if(flag==1)
    printf("\nThe given %d is Prime.",num);
}
