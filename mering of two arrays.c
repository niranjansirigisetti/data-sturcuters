//mergeing of two arrays
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[30],arr2[30],mer[30];
	int len1,len2,i;
	printf("enter the first array length: ");
	scanf("%d",&len1);
	printf("enter the second array length: ");
	scanf("%d",&len2);
	printf("enter the first array elements:\n");
	for(i=0;i<len1;i++)
	scanf("%d",&arr1[i]);
	printf("enter the second array elements:\n");
	for(i=0;i<len2;i++)
	scanf("%d",&arr2[i]);
	for(i=0;i<len1;i++)
	mer[i]=arr1[i];
	for(i=0;i<len2;i++)
	mer[len1+i]=arr2[i];
	printf("\n.....The final merged array is.......\n");
	for(i=0;i<len1+len2;i++)
	printf("%d  ",mer[i]);
	
}
