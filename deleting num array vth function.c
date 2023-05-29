void delect(int arr[],int n)
    {
		int pos,i;
		printf("The actual array is:\n");
		for(i=0;i<n;i++)
		printf("%d  ",arr[i]);
		printf("\nenter the delecting postion: ");
		scanf("%d",&pos);
		for(i=pos;i<n;i++)
		arr[i]=arr[i+1];
		n--;
		printf("After delecting element from array.\n");
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
	delect(arr,size);
}
