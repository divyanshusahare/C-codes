//If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is 
//valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st Side=");
    scanf("%d",&a);
    printf("Enter the 2nd Side=");
    scanf("%d",&b);
    printf("Enter the 3rd Side=");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b)
    printf("The Triangle is Valid.");
    else
    printf("The Triangle is Invalid.");
}
