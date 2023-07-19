/*linked list operations
  insertion at begining,ending,middle
  deleting element at begining,ending,middle
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;	
};
struct node *head=NULL;
struct node* create();
void insert_at_beg();
void insert_at_middle();
void insert_at_end();
void delete_at_beg();
void delete_at_middle();
void delete_at_end();
void display();
void main()
{
	int t,choice;
	struct node *temp,*newnode;
	printf("How many nodes you want: ");
	scanf("%d",&t);
	while(t--)
	{
		newnode=create();
		if(head==NULL)
		head=temp=newnode;
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	while(1)
	{
	printf("\n-------------------------------------------");
	printf("\nPress 1: For Display.");
	printf("\nPress 2: For inserting element at beggining.");
	printf("\nPress 3: For inserting element at middle.");
	printf("\nPress 4: For inserting element at end.");
	printf("\nPress 5: For deleting element at begining.");
	printf("\nPress 6: For deleting element at middle.");
	printf("\nPress 7: For deleting element at end.");
	printf("\nPress 8: For exit.");
	printf("\n---------------------------------------------\n\n");
	scanf("%d",&choice);
	    switch(choice)
	    {
		  case 1:display();
		        break;
		  case 2:insert_at_beg();
		        break;
	      case 3:insert_at_middle();
		        break;
          case 4:insert_at_end();
		        break;
		  case 5:delete_at_beg();
		  		break;
		  case 6:delete_at_middle();
		  	    break;
		  case 7:delete_at_end();
		        break;
		  case 8:exit(0);
		        break;
		  default:printf("The number doesnot exist.");		      
						   							      
	    }
    }
}
struct node* create()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d   ",temp->data);
		temp=temp->next;
	}
}
void delete_at_beg()
{
	head=head->next;
}
void delete_at_end()
{
	struct node *temp,*prv;
	temp=prv=head;
	while(temp->next!=NULL)
	{
		prv=temp;
		temp=temp->next;
	}
	prv->next=NULL;
}
void insert_at_beg()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=newnode;
	else
	{
		newnode->next=head;
		head=newnode;
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
		
}
void insert_at_end()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=newnode;
	else
	{
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;	
		}
		temp->next=newnode;
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
		
}
void insert_at_middle()
{
	struct node *temp,*newnode,*prev;
	int count=0,pos,ctr=1;
	printf("enter the inserting element: \n");
	newnode=create();
	printf("enter the inserting position: ");
	scanf("%d",&pos);
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	if(pos>1 && pos < count)
	{
		temp=prev=head;
		while(ctr < pos )
		{
			prev=temp;
			temp=temp->next;
			ctr++;
		}
		prev->next=newnode;
		newnode->next=temp;
	}
	else
	printf("The insertion is not possible.");
	
}
void delete_at_middle()
{
	struct node *temp,*prev;
	int pos,count=0,i=1;
	printf("Enter the delecting postion: ");
	scanf("%d",&pos);
	temp=head;
	while(temp !=NULL)
	{
		count++;
		temp=temp->next;
	}
	if(pos <count && pos >1)
	{
		temp=prev=head;
		while(i<pos)
		{
			prev=temp;
			temp=temp->next;
			i++;
		}
	 prev->next=temp->next;	 
	}
}
