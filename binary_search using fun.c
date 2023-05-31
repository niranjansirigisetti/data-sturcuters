//binary search using function
#include<stdio.h>
#include<conio.h>
void binary_search(int arr[],int len)
{
	int i,j,mid,sindex,ele,eindex,temp;
	printf("The actual array is:\n");
	for(i=0;i<len;i++)
	printf("%d  ",arr[i]);
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
    }
    printf("After sorting.\n");
    for(i=0;i<len;i++)
    printf("%d  ",arr[i]);
	sindex=0,eindex=len-1;
	printf("\nEnter the searching element: ");
	scanf("%d",&ele);
	while(sindex<=eindex)
	{
		mid=(sindex+eindex)/2;
		if(arr[mid]==ele)
		{
			printf("The element is found in %d location",mid);
			break;
		}
			if(arr[mid]>ele)
			eindex=mid-1;
			else
			sindex=mid+1;
	}
}
void main()
{
	int len,i;
	printf("Enter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	printf("enter the array elements:\n");
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	binary_search(arr,len);
}
