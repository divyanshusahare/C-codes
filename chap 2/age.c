#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the Age of Ram:",r);
    scanf("%d",&r);
    printf("Enter the Age of Shyam:",s);
    scanf("%d",&s);
    printf("Enter the Age of Ajay:",a);
    scanf("%d",&a);
    if(r<s)
    {
        if(r<a)
        printf("Ram is youngest one");
        else
        printf("Ajay is Youngest one");
    }
    else
    {
        if(s<a)
        printf("Shyam is youngest one");
        else
        printf("Ajay is Youngest one");
    }
        
}
