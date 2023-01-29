 //INSERT FROM BEGINING
#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node
{
	int data;
	Node * next;
};
    Node*head=NULL;
Node * CreatNode(int x)
{
	Node *p;
	p=(Node*)malloc(sizeof(Node));
	p->data=x;
	p->next=NULL;
	return p;
}
void insert(int x)
{
	Node * ptr;
	ptr=CreatNode(x);//NEWNODE FROM CREATNODE FUNCTION
	//LINKING
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		Node*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=ptr;
	}
	
}
void display()
{
	Node*temp=head;
	if(temp==NULL)
	{
		printf("Linked List Is Empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void insertBegin(int x)
{
	Node * ptr;
	ptr=CreatNode(x);
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		ptr->next=head;
		head=ptr;
	}
}
int main()
{
	insert(12);
	insertBegin(20);
	insert(14);
	insert(16);
	insertBegin(35);
	display();
}
