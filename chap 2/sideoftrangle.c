/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not. The triangle is valid if the sum of two sides is
greater than the largest of the three sides.*/

#include<stdio.h>
int main()
{
int side1,side2,side3,max;
printf("enter triangle side1= ");
scanf("%d",&side1);
printf("enter triangle side2= ");
scanf("%d",&side2);
printf("enter triangle side3= ");
scanf("%d",&side3);
max=90;
if((side1+side2)>side3)


printf("triangle is valid");

else if((side1+side3)>side2)
printf("triangle is valid");

else if((side2+side3)>side1)
printf("triangle is valid");

else
printf("triangle is invalide");
return 0;
}

