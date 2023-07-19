//circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create();
void insert_at_beg();
void insert_at_middle();
void insert_at_end();
void delete_at_beg();
void delete_at_middle();
void delete_at_end();
void display();
struct node *head=NULL,*tail;
void main()
{
	int t,ch;
	struct node *newnode;
	printf("Enter the no.of nodes you want: ");
	scanf("%d",&t);
	while(t--)
	{
		newnode=create();
		if(head==NULL)
		head=tail=newnode;
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
	}	
	tail->next=head;
	while(1)
	{
    printf("\n--------------------------------");
    printf("\nPress 1: For insert at begining.");
	printf("\nPress 2: For insert at middle");
	printf("\nPress 3: For insert at end.");
	printf("\nPress 4: For delete at begining.");
	printf("\nPress 5: For delete at middle.");
	printf("\nPress 6: For delete at end.");
	printf("\nPress 7:dispaly.");
	printf("\nPress 8: For exit.");
	printf("\n---------------------------------\n\n");
	scanf("%d",&ch);
	  switch(ch)
	   {
		case 1:insert_at_beg();
				   break;
		case 2:insert_at_middle();
			       break;
		case 3:insert_at_end();
		           break;
		case 4:delete_at_beg();
		           break;
		case 5:delete_at_middle();
		           break;
		case 6:delete_at_end();		   	       
			       break;
	    case 7:display();
		           break;		       
		case 8:exit(0);
			       break;
     	}
	}
}
struct node *create()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp->next!=head)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}
void insert_at_beg()
{
	struct node *newnode;
	newnode=create();
	newnode->next=head;
	head=newnode;
	tail->next=newnode;
}
void insert_at_end()
{
	struct node *newnode;
	newnode=create();
	tail->next=newnode;
	tail=newnode;
	newnode->next=head;
}
void insert_at_middle()
{
	int pos,count=1,i=1;
	struct node *temp,*prev;
	struct node *newnode;
	newnode=create();
	printf("Enter the position: ");
	scanf("%d",&pos);
	temp=head;
	while(temp->next!=head)
	{
		count++;
		temp=temp->next;
	}
	printf("\nnode count:%d",count);
	temp=prev=head;
	if(pos>0 && pos<count)
	{  
		while(pos>i)
		{
		  prev=temp;	
		  temp=temp->next;
		  i++;	
		}
		newnode->next=prev->next;
		prev->next=newnode;
	}
}
void delete_at_beg()
{
	struct node *temp;
	temp=head;
	head=head->next;
	tail->next=head;
	free(temp);
}
void delete_at_end()
{
	struct node *temp,*prev;
	temp=prev=head;
	while(temp->next!=head)
	{ 
		 prev=temp;
		 temp=temp->next; 
	}
	prev->next=head;
	free(temp);
}
void delete_at_middle()
{
	int pos,count=1,i=1;
	struct node *temp,*prev;
	printf("Enter the position: ");
	scanf("%d",&pos);
	temp=prev=head;
	while(temp->next!=head)
	{
		count++;
		temp=temp->next;
	}
	temp=head;
	if(pos>0 && pos<count)
	{  
		while(pos>i)
		{ 
		  prev=temp;
		  temp=temp->next;
		  i++;	
		}
		prev->next=temp->next;
		free(temp);
	}
}
