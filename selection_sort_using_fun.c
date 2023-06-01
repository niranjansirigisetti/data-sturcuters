//selection sort using function
#include<stdio.h>
void selection_sort(int arr[],int n)
{
	int i,j;
	printf("The actual array is:\n");
	for(i=0;i<n;i++)
	printf("%d  ",arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(arr[i]>arr[j])
		{
			arr[i]=arr[i]+arr[j];
			arr[j]=arr[i]-arr[j];
			arr[i]=arr[i]-arr[j];
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
