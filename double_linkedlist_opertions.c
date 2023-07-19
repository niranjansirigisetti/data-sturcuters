//doubly linked list opeartions
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
struct node *create();
void insert_at_beg();
void insert_at_middle();
void insert_at_end();
void delete_at_beg();
void delete_at_middle();
void delete_at_end();
void forward_display();
void backward_display();
void main()
{
	int t,ch;
	struct node *newnode;
	printf("enter the no.of nodes: ");
	scanf("%d",&t);
	while(t--)
	{
		newnode=create();
		if(head==NULL)
		head=tail=newnode;
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
	while(1)
	{
		printf("\n------------------------------------\n");
		printf("\nPress 1: For forward display.");
		printf("\npress 2: For backward display.");
		printf("\nPress 3: For insert at begining.");
		printf("\nPress 4: For insert at middle");
		printf("\nPress 5: For insert at end.");
		printf("\nPress 6: For delete at begining.");
		printf("\nPress 7: For delete at middle.");
		printf("\nPress 8: For delete at end.");
		printf("\nPress 9: For exit.");
		printf("\n--------------------------------------\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:forward_display();
			       break;
			case 2:backward_display();
			       break;
		    case 3:insert_at_beg();
				   break;
		    case 4:insert_at_middle();
			       break;
		    case 5:insert_at_end();
		           break;
		    case 6:delete_at_beg();
		           break;
		    case 7:delete_at_middle();
		           break;
		    case 8:delete_at_end();		   	       
			       break;
		    case 9:exit(0);
			       break;		   		   	          
		}
	}
}
struct node* create()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void forward_display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
	printf("%d  ",temp->data);
	temp=temp->next;
    }
}
void backward_display()
{
	struct node *temp;
	temp=tail;
	while(temp!=NULL)
	{
		printf("%d   ",temp->data);
		temp=temp->prev;
	}
}
void insert_at_beg()
{
    struct node *newnode;
    newnode=create();
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void insert_at_end()
{
	struct node *newnode;
	newnode=create();
	tail->next=newnode;
	newnode->prev=tail;
	tail=newnode;
}
void insert_at_middle()
{
	struct node *newnode,*temp;
	newnode=create();
	int count=0,i=1,pos;
	printf("Enter the position: ");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;	
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->next->prev=newnode;
}
void delete_at_beg()
{
	struct node *temp;
	temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
}
void delete_at_end()
{
	struct node *temp;
	temp=tail;
	tail->prev->next=NULL;
	free(temp);
}
void delete_at_middle()
{
	struct node *temp;
	temp=head;
	int pos,i=1;
	printf("Enter the position: ");
	scanf("%d",&pos);
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	
}
