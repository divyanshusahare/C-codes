/* enter any total marks obtain by the students & search wheather that marks is available
   in a class or not     (ele=element,dim=dimension)                 */
   
int main()
{
	int marks[100],dim,ele,flag=0,count=0,i;
	printf("\n enter size of dataset = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
		printf("\n enter total marks obtained by student  %d ",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n enter the marks of student to search = ");
	scanf("%d",&ele);
	for(i=0;i<dim;i++)
	{
		if(ele==marks[i])
		{
			flag=1;
			count++;
		}
	}
	if(flag==1)
	{
		printf("\n the marks = %d is available in dataset %d number of times ", ele,count);
	}
	else
	printf("\n the marks = %d is not available in dataset ",ele);
}
