//queue using linkedlist
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create();
void inqueue();
void dequeue();
void peak();
void display();
struct node *front=NULL,*rear=NULL;
void main()
{
	int ch;
	while(1)
	{
	printf("\n-------------------------------------------");
	printf("\nPress 1: For insert element in queue.");
	printf("\nPress 2: For Delete element in queue.");
	printf("\nPress 3: To find peek element in queue.");
	printf("\nPress 4: To dispaly the queue.");
	printf("\nPress 5: For exit.");
	printf("\n------------------------------------------\n");
	printf("\nEnter the choice:");
	scanf("%d",&ch);
	    switch(ch)
       {
		case 1:inqueue();
		       break;
		case 2:dequeue();
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
struct node *create()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void inqueue()
{
	struct node *newnode;
	newnode=create();
	if(front==NULL&&rear==NULL)
	front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	struct node *temp;
	temp=front;
	if(front==NULL&& rear==NULL)
	printf("The stack is empty");
	else
	front=front->next;
	free(temp);
}
void peak()
{
	if(front==NULL&&rear==NULL)
	printf("The stack is empty");
	else
	printf("The peak element is %d",front->data);
}
void display()
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d   ",temp->data);
		temp=temp->next;
	}
}
