int main()
{
	int a[10],ele,dim,i,pos;
	printf("enter size of array = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
	printf("\n enter marks obtained of student %d = ",i+1);
	scanf("%d",&a[i]);
	}
	printf("\n enter position of element to delete = ");
	scanf("%d",&pos);
	for(i=pos;i<dim;i++)
	a[i-1]=a[i];
	printf("\n array element after deletion = ");
	for(i=0;i<dim-1;i++)
	printf("%4d",a[i]);
}
