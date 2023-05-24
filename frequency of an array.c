//finding duplicating in an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[7]={10,20,10,20,30,20,40};
	int i,j,input,count=0;
	printf("The array is\n");
	for(i=0;i<7;i++)
	printf("%d  ",arr[i]);
	printf("\nenter the input: ");
	scanf("%d",&input);
	for(i=0;i<7;i++)
	{
	if(arr[i]==input)
	count++;
    }
    printf("The frequency of the given number is %d",count);	
}
