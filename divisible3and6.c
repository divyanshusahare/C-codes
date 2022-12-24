//write a progarm to find all number which are divisible by 4 and 6 upto hundred
#include<stdio.h>
int main()
{
	int i=1;
	int count = 0;
		printf("divisible by 4 and 6 upto hundred");
	while(i<100)
	{
		if(i%4==0&&i%6==0)
		 
		printf("\n%d",i);
		count=count+i;
		 
		i++;
	}
	printf("the count is=%d",count);
}
