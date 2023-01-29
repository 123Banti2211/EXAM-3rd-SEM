#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Node tree;

struct Node{
	int data;
	tree * left;
	tree * right;
};

tree * creatnode(int d)
{
	tree * p = (tree *)malloc(sizeof(tree));
	p->data=d;
	p->left=NULL;
	p->right=NULL;	
	return p;
}

tree * insertleft(tree * root, int d)
{
	root->left = creatnode(d);
	return root->left;
}

tree * insertright(tree * root, int d)
{
	root->right = creatnode(d);
	return root->right;
}

//void display()
//{
//	
//}

void pretra(tree*root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d ",root->data);
	pretra(root->left);
	pretra(root->right);
}

//printf("\n");
void intra(tree*root)
{
	if(root==NULL)
	{
		return;
	}
	intra(root->left);
	printf("%d ",root->data);
	intra(root->right);
}

//printf("\n");
void posttra(tree*root)
{
	if(root==NULL)
	{
		return;
	}
	posttra(root->left);
	posttra(root->right);
	printf("%d ",root->data);
}

void main()
{
	tree * root = creatnode(5);
//	printf("%d",root->data);

	tree * e1 = insertleft(root,-10);
	tree * e2 =insertright(root,+10);
//	insertleft(e1,12);
//	insertleft(e2,45);

	pretra(root);
	printf("\n");
	intra(root);
	printf("\n");
	posttra(root);
}
