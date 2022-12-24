int main()
{
	int a[10],dim,i,j,temp;
	printf("enter size of dataset = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
	printf("\n enter marks obtained of student %d = ",i+1);
	scanf("%d",&a[i]);
	}
	printf("\n before sorting = ");
	for(i=0;i<dim;i++)
	printf("\n %4d",a[i]);
	for(i=0;i<dim-1;i++)
	{
		for(j=i+1;j<dim;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n after sorting = ");
	for(i=0;i<dim;i++)
	printf("\n %4d",a[i]);
}
