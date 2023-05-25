//reverse of an string
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50],rev[50],temp;
	int i=0,len=0,j=0;
	printf("enter the string : ");
	gets(str);
	while(str[i]!='\0') 
	{
	len++;
	i++;
    }
    for(i=len-1;i>=0;i--)
    {
    	temp=str[i];
    	rev[j]=temp;
    	j++;
	}
    printf("The actual string is :\n");
    puts(str);
    printf("The reversed string is :\n");
    puts(rev);
    
	
}
