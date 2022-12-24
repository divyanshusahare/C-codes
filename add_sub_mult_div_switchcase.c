//wtrite a progarm following opration on two number
//ADD
//SUB
//MULT
//DIV

#include<stdio.h>
int main()
{
	float num1,num2,result;
	int choice;
	printf("\n1:addition\n2:substraction\n3:multi\n4:division\nother:exit = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the any two number");
			scanf("%f %f",&num1,&num2);
			result=num1+num2;
			printf("addition of two number=%f",result);
		break;
			 
	  	
	case 2:
			printf("enter the any two number");
			scanf("%f %f",&num1,&num2);
			result=num1-num2;
			printf("substraction of two number=%f",result);
		break;
		
	case 3:
			printf("enter the any two number");
			scanf("%f %f",&num1,&num2);
			result=num1*num2;
			printf("multiplication of two number=%f",result);
		break;
			 	
	case 4:
			printf("enter the any two number");
			scanf("%f %f",&num1,&num2);
			result=num1/num2;
			printf("division of two number=%f",result);
	break;
			
			default:
				printf("Exit");
	}
			  
	
}
