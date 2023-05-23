//strong number
#include<stdio.h>
#include<conio.h>
int factorial(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	fact=fact*i;
	return fact;
}
void main()
{
	int num,digit,fun,res=0,temp,i;
	printf("enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		fun=factorial(digit);
		res=res+fun;
		num=num/10;
	}
	if(temp==res)
	printf("The given number is strong number");
	else
	printf("Not an strong number");
}
