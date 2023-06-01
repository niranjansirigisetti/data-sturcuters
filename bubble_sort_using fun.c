//bubble sort using function
#include<stdio.h>
void selection_sort(int arr[],int n)
{
	int i,j,temp;
	printf("The actual array is:\n");
	for(i=0;i<n;i++)
	printf("%d  ",arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}	
	}
	printf("\nAfter sorting.\n");
	for(i=0;i<n;i++)
	printf("%d  ",arr[i]);
}
void main()
{
	int len,i;
	printf("Enter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	printf("Enter the array elements:\n");
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	selection_sort(arr,len);
}
