#include<stdio.h>
int main()
{
    char health,loc,gender,E,P,C,V,M,F;
    int age;
    float pamt,pre;
    printf("Enter the customer health(E/P):");
    health=getchar();
    printf("\nEnter the customer location(C/V):");
    loc=getchar();
    printf("\nEnter the customer gender(M/F):");
    gender=getchar();
    printf("Enter the customer Age:"); 
    scanf("%d",&age);
    if((health=E)&&(age>=25&&age<=35)&&(loc=C)&&(gender=M))
    {
        printf("\nDear customer you are eligible for Insurance");
        printf("\nEnter the policy amount"); 
        scanf("%f",&pamt);
        if(pamt<=200000)
        {
            pre=pamt*4/1000;
        printf("\nDear customer your premium=Rs%f for Rs%f",pre,pamt);
        }
        else
        printf("\nDear customer policy amount proceed");
    }
    else if ((health=E)&&(age>=25&&age<=35)&&(loc=C)&&(gender=F))
    {
        printf("\nDear customer you are eligible for Insurance");
        printf("\nEnter the policy amount"); scanf("%f",&pamt);
        if(pamt<=100000)
        {
            pre=pamt*3/1000;
        printf("\nDear customer your premium=Rs%f for Rs%f",pre,pamt);
        }
        else
        printf("\nDear customer policy amount proceed");
    }
    else if ((health=P)&&(age>=25&&age<=35)&&(loc=V)&&(gender=M))
    {
        printf("\nDear customer you are eligible for Insurance");
        printf("\nEnter the policy amount"); scanf("%f",&pamt);
        if(pamt<=10000)
        {
            pre=pamt*6/1000;
        printf("\nDear customer your premium=Rs%f for Rs%f",pre,pamt);
        }
        else
        printf("\nDear customer policy amount proceed");
    }
    else
    printf("\nDear customer you are not eligible for Insurance");

}

