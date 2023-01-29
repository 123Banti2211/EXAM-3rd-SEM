#define N 5
int stack[N];
int top=(-1);
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

int main()
{
	push();
	push();
	push();	
	push();
	push();
	display();
	pop();
	pop();
	display();	
}
