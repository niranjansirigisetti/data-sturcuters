void insert(int arr[],int n)
{
		int pos,ele,i;
		printf("The actual array is:\n");
		for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
		printf("\nEnter the inserting element: ");
		scanf("%d",&ele);
		printf("\nIn which position you are going to enter:");
		scanf("%d",&pos);
		for(i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
		arr[pos]=ele;
		n++;
		printf("After inserting element into array.\n");
		for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
	}
void main()
{
	int num,size,i;
	printf("Enter the array size: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	insert(arr,size);
}
