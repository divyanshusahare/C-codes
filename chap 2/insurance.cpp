//An Insurance company follows following rules to calculate 
//premium. 
//(1) If a person’s health is excellent and the person is between 
//25 and 35 years of age and lives in a city and is a male 
//then the premium is Rs. 4 per thousand and his policy 
//amount cannot exceed Rs. 2 lakhs. 
//(2) If a person satisfies all the above conditions except that 
//the sex is female then the premium is Rs. 3 per thousand 
//and her policy amount cannot exceed Rs. 1 lakh. 
//(3) If a person’s health is poor and the person is between 25 
//and 35 years of age and lives in a village and is a male 
//then the premium is Rs. 6 per thousand and his policy 
//cannot exceed Rs. 10,000. 
//(4) In all other cases the person is not insured.

#include<stdio.h>
#include<conio.h>
int main()
{
	char health,location,gender;
	int age;
	float policy_amout,premium;
	printf("Enter the health(Exellent/Poor)");
	health = getch();
	printf("enter the location");
	location = getch();
	printf("enter the gender");
	gender = getch();
	printf("enter the age");
	age = getch();
	
	if(health=="e"||health=="E")&&(age>=23&&age<=35)&&(location=="c"||location=="C")&&(gender=="g"||gender=="G")
	{
		printf("DEar costumer ypu are eligible foe insurance");
		
		printf("ENter the policy amount ");
		scanf("f",&policy_amount);
		if(policy_amount<=200000)
		{
			premium = policy_amount*4/1000;
			printf("dear costumer your premium =RS%f for RS%f ",premium,policy_amount)
			
		}
		else 
			printf("dear costumer your polcy amount exced");
	}
	else if(health=="e"||health=="E")&&(age>=23&&age<=35)&&(location=="c"||location=="C")&&(gender=="g"||gender=="G")
	{
		printf("DEar costumer ypu are eligible foe insurance");
		
		printf("ENter the policy amount ");
		scanf("f",&policy_amount);
		if(policy_amount<=100000)
		{
			premium = policy_amount*3/1000;
			printf("dear costumer your premium =RS%f for RS%f ",premium,policy_amount)
		}
		else 
			printf("dear costumer your polcy amount exced");
		
	}
	else if(health=="e"||health=="E")&&(age>=23&&age<=35)&&(location=="c"||location=="C")&&(gender=="g"||gender=="G")
	{
		printf("DEar costumer ypu are eligible foe insurance");
		
		printf("ENter the policy amount ");
		scanf("f",&policy_amount);
		if(policy_amount<=10000)
		{
			premium = policy_amount*6/1000;
			printf("dear costumer your premium =RS%f for RS%f ",premium,policy_amount)
		}
		else 
			printf("dear costumer your polcy amount exced");
	}
    else
	{	
		printf("Dear costumer your not eligible");
	 }	 
	}
	
