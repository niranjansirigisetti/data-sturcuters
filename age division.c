#include<stdio.h>
#include<conio.h>
void main()
{
	int i,age,babyage=0,schage=0,adultage=0;
	for(i=1;i<=20;i++)
	{
		scanf("%d",&age);
		if(age>=1&&age<=5)
	    babyage+=1;
		else if(age>5 && age<=15)
		schage+=1;
		else
		adultage+=1;    
	}
	printf("\nThe babyage=%d",babyage);
	printf("\nThe schoolage=%d",schage);
	printf("\n The adult age=%d",adultage);
}
