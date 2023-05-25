//string
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	int spc=0,lwrchar=0,i=0;
	printf("enter the string:\n");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		lwrchar++;
		else
		spc++;
		i++;
	}
	printf("\nLowercase characters:%d",lwrchar);
	printf("\nThe special symbol are:%d",spc);
	
}
