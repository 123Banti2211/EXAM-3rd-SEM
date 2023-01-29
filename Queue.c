#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rare=-1;
void enqueue()
{
	int x;
	printf("Enter an element for enqueue operation:");
	scanf("%d",&x);
	if(rare==N-1)
	{
		printf("Queue is full");
	}
//	else if(front==-1 && rare==-1)
//	{
//		front=rare=0;
//		queue[rare]=x;
//	}
	else
	{
		if(front==-1)
		front=0;
		rare++;
		queue[rare]=x;
	}
}

void dequeue()
{
	if(front==-1 && rare==-1)
	{
		printf("Queue Is Empty!!");
	}
	else if(front==rare)
	{
		printf("%d\t",queue[front]);
		front=rare=-1;
	}
	else
	{
		printf("%d\t",queue[front]);
		front++;	
	}	
}

void display()
{
	int i;
	if(front==-1 && rare==-1)
	{
		printf(" Queue Is Empty!!");
	}
	else
	{
		for(i=front;i<rare+1;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
void main()
{
	
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	printf("The content of queue: ");
	display();
	printf("\n");
	printf("The Dequeue Element Are: ");
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	printf("\nThe left elements in the queue: ");
	display();
	
}
