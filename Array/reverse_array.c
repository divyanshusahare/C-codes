/* find out reverse array */

int main()
{
	int marks[100],dim,i;
	printf("enter size of database = ");
	scanf("%d",&dim);
	for(i=0;i<dim;i++)
	{
		printf("enter total marks obtained by student %d ",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=dim-1;i>=0;i--)
	printf("%4d",marks[i]);
}
