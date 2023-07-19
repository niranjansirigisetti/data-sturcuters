//stack using linkedlist
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* create();
void push();
void pop();
void peak();
void display();
struct node *top=NULL;
void main()
{
	int ch;
	while(1)
	{
	printf("\n-------------------------------------------");
	printf("\nPress 1: For push the stack.");
	printf("\nPress 2: For pop the stack.");
	printf("\nPress 3: To find peak element in stack.");
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
	    case 3:peak();
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
struct node* create()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void push()
{
	struct node *newnode;
	newnode=create();
	if(top==NULL)
	top=newnode;
	else
	{
	 newnode->next=top;
	 top=newnode;	
	}
}
void pop()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	printf("deletion not possible.");
	else
	{
	top=top->next;
	printf("The deleted element is %d",temp->data);
    }
	free(temp);

}
void peak()
{
	printf("The top element is %d",top->data);
}
void display()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	printf("The stack is empty.");
	else
	{
	printf("The stack elements are: ");
    	while(temp!=NULL)
	   {
		printf("\n%d  ",temp->data);
		temp=temp->next;
	   }
	} 
}

