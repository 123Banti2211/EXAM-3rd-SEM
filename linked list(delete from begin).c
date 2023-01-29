

// DELETE FROM BEGIN
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

void DeletefromBegin()
{
	if(head==NULL)
	{
		printf("EMPTY LIST!");
	}
	else
	{
		Node * pre;
		Node * temp=head;
		if(temp->next==NULL)
		{
			printf("%d",temp->data);
			free(temp);
			head = NULL;
		}
		else
		{
			Node * p;
			p = temp->next;
			head =p;
			printf("Deleted Node Is - %d\n",temp->data);
//			pre->next=NULL;
			free(temp);		
		}

//		pre=head;
//		head=head->next;
//		free(pre);
//		printf("Deleted Node Is - %d\n",pre);
		
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
int main()
{
	insert(12);
	insert(14);
	insert(16);
	display();
	getch();
	printf("\n");
//	Deletefromend();
    DeletefromBegin();
	display();
}
