//Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter,
//a small case letter, a digit or a special symbol. 

#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("\nEntered character %c is Uppercase",ch);
    else if(ch>=97 && ch<=122)
    printf("\nThe character %c is Lowercase",ch);
    else if(ch>=48 && ch<=57)
    printf("\nThe character %c is digit",ch);
    else
    printf("\nThe character %c is special symbol",ch);
    return 0;
}

