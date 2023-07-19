//stack using arrays
#include<stdio.h>
#include<conio.h>
#define n 5
void push();
void pop();
void peek();
void display();
int top=-1;
int stack[n];
void main()
{
	int ch;
	while(1)
	{
	printf("\n-------------------------------------------");
	printf("\nPress 1: For push the stack.");
	printf("\nPress 2: For pop the stack.");
	printf("\nPress 3: To find peek element in stack.");
	printf("\nPress 4: To dispaly the stack.");
	printf("\nPress 5: For exit.");
	printf("\n------------------------------------------\n");
	scanf("%d",&ch);
	    switch(ch)
       {
		case 1:push();
		       break;
		case 2:pop();
		       break;
	    case 3:peek();
		       break;
		case 4:display();
		       break;
		case 5:exit(0);
		       break;
	    default:printf("Invalid choice.");
		       break;	   	   		          
	   }
    }
}
void push()
{
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	if(top==n-1)
	printf("The stack is overflow.");
	else
	{
	top++;
	stack[top]=ele;
    }
}
void pop()
{
	if(top==-1)
	printf("The stack is underflow");
	else
	top--;
}
void peek()
{
	printf("\nThe peek element is %d",stack[top]);
}
void display()
{
	int i;
	if(top==-1)
	printf("The stack is empty.");
	printf("The stack elements are:");
	for(i=top;i>=0;i--)
	printf("\n%d",stack[i]);
}
