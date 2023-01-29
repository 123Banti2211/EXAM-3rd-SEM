#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node Node;
struct node
{
	int data;
	Node* pre;
	Node* next;
};
Node * head=NULL;

Node * createnode(int x)
{
	Node *p = (Node*)malloc(sizeof(Node));
	p-> data= x;
	p->pre=NULL;
	p->next=NULL;
	return p;
}

void insertend(int x)
{
	Node * ptr=createnode(x);
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		Node * t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=ptr;
		ptr->pre=t;
	}
}

void insertbegin(int x)
{
	Node * ptr=createnode(x);
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		Node * t=head;
		t->pre=ptr;
		ptr->next=t;
		head=ptr;
	}
}

void display()
{
	Node * temp;
	if(head==NULL)
	{
		printf("Linked List Is Empty!");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}

}

void reversedisplay()
{
	Node * temp;
	if(head==NULL)
	{
		printf("Linked List Is Empty!");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}	
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->pre;
		}
	}
}


void searching(int d)
{
	Node * temp;
	int c=0;
	if(head==NULL)
	{
		printf("Linked List Is Empty!");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
//			printf("%d\t",temp->data);
			if(d==temp->data)
			{
				c++;	
			}
			temp=temp->next;
		}
		if(c>0)
		{
			printf("Value Is Found.");
		}
		else
		{
			printf("Value Is Not Found!");
		}
	}
}

void insertpos(int x,int pos)
{
	Node * ptr=createnode(x);
	int c=0;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		Node * t=head;
		while(t!=NULL)
		{
			c++;
			t=t->next;
		}
		if(c==pos-1)
		{
			insertend(x);
		}
	}
}

void main()
{
//	Node*p=createnode(12);
//	printf("%d",p->data);
	
	insertend(12);
	insertend(20);
//	display();
//	printf("\n");
	insertbegin(50);
	insertbegin(60);
//	display();
//	printf("\n");
//	reversedisplay();
//	printf("\nEnter a value to serach:");
//	int d;
//	scanf("%d",&d);
//	searching(d);
	insertpos(90,6);
	display();
	
}
