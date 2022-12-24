int main()
{
	int a[100],i,dimension;
	printf("enter dimension of array = ");
	scanf("%d",&dimension);
	printf("\n enter elements into array = ");
	for(i=0;i<dimension;i++)
	{
		printf("\n enter elements at a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<dimension;i++)
	printf("\n array element a[%d]=%d",i,a[i]);
	return 0;
}
