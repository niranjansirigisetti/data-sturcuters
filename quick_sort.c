//quick sort
#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int partition(int arr[],int lb,int ub)
{
	int pivot,start,end;
	pivot=arr[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
		start++;
		while(arr[end]>pivot)
		end--;
		if(start<end)
		{
			swap(&arr[start],&arr[end]);
		}	
	}
	swap(&arr[lb],&arr[end]);
	return end;
}
quick_sort(int arr[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
	 loc=partition(arr,lb,ub);
	 quick_sort(arr,lb,loc-1);
	 quick_sort(arr,loc+1,ub);	
	}
	
}
void main()
{
	int arr[100],i,size,lb,ub;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	lb=0;
	ub=size-1;
	quick_sort(arr,lb,ub);
	printf("After sorting\n");
	for(i=0;i<size;i++)
	printf("%d  ",arr[i]);	
}
