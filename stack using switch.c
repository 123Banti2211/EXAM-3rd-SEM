#include<stdio.h>
#include<conio.h>
#define N 5
int stack[N];
int top=(-1);
int menu()
{
	printf("Choose any one.");
	printf("\n1.PUSH");
	printf("\n2.POP");
	printf("\n3.DISPLAY");
	printf("\n4.EXIT");
	int ch;
	printf("\nEnter a number");
	scanf("%d",&ch);
	return(ch);
}
void push()
{
	int x;
	printf("Enter Data: ");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("OVERFLOW");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	int item;
	if(top==-1)
	{
		printf("Stack is Empty");
	}
	else
	{
		item=stack[top];
		top--;
		printf("\nThe popped item is %d",item);
	}	
} 

void display()
{
	int i;
	printf("\nThe content of stack is: ");
	for(i=top;i>=0;i--)
	{
		printf("\n%d\t",stack[i]);
	}
}

void main()
{
	while(1)
	{
		system("cls");
		switch(menu())
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
		}
	}
}
