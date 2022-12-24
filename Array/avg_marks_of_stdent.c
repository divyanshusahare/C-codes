int main()
{
	int marks[100],i,dim,sum=0;
	float avg;
	printf("enter no. of students in class = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
		printf("\n enter marks obtained by student %d = ",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<dim;i++)
	sum=sum+marks[i];
	avg=(float) sum/dim;
	printf("\n sum obtained = %d ",sum);
	printf("\n average obtained by the class = %f ",avg);
}
