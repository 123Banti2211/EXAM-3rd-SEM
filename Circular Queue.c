#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rare=-1;

void enqueue()
{
	int x;
	printf("\nEnter an element for enqueue operation:");
	scanf("%d",&x);
	if((rare+1)%N==front)
	{
		printf("Queue Is Full!!");
	}
	else if(front==-1 && rare==-1)
	{
		front=rare=0;
		queue[rare]=x;
	}
	else
	{
		rare=(rare+1)%N;
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
		front=(front+1)%N;
	}
}

void display()
{
	int i=front;
	if(front==-1 && rare==-1)
	{
		printf(" Queue Is Empty!!");
	}
	else
	{
		while(i!=rare)
		{
			printf("%d\t",queue[i]);
			i=(i+1)%N;
		}
		printf("%d",queue[rare]);
	}
}

void main()
{
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
//	enqueue();
	printf("The content of queue: ");
	display();
	printf("\n");
	printf("The Dequeue Element Are: ");
	dequeue();
	dequeue();
	printf("\nThe left elements in the queue: ");
	display();
	enqueue();
	enqueue();
	printf("\nThe left elements in the queue: ");
	display();
	
}
