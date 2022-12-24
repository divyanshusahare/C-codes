/* enter any total marks obtain by the students & find out 1st & 2nd largest marks
   in a class.     (ele=element,dim=dimension)                 */
   
int main()
{
	int marks[100],dim,ele,i,largest1,largest2,temp;
	printf("\n enter size of dataset = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
		printf("\n enter total marks obtained by student  %d ",i+1);
		scanf("%d",&marks[i]);
	}
	largest1=marks[0];
	largest2=marks[1];
	if(largest1<largest2)
	{
		temp=largest1;
		largest1=largest2;
		largest2=temp;
	}
	for(i=2;i<dim;i++)
	{
		if(largest1<marks[i])
		{
			largest2=largest1;
			largest1=marks[i];
		}
		else
		if(largest2<marks[i]&&largest2!=marks[i])
		{
			largest2=marks[i];
		}
	}
	printf(" lagsest1 = %d \n largest2 = %d ",largest1,largest2);
}
