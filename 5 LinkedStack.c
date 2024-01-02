#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top,*n;
void push(int num)
{
	n=(struct node*)malloc(sizeof(struct node));
	if(!n)
	{
		printf("\nOverflow");
		exit(1);
	}
	else
	{
		n->data=num;
		n->next=top;
		top=n;
	}
}
void pop()
{
	struct node *t;
	if(!n)
	{
		printf("\nOverflow");
		exit(1);
	}
	else
	{
		t=top;
		top=top->next;
		t->next=NULL;
		free(t);
		printf("\n\nElement Popped Out\n\n");
	}
}
void dis()
{
	struct node *t;
	if(!n)
	{
		printf("\nOverflow");
		exit(1);
	}
	else
	{
		t=top;
		printf("\nElements :  ");
		while(t!=NULL)
		{
			printf("%d ",t->data);
			t=t->next;
		}
		printf("\n\n");
	}
	
}
void peak()
{
	if(!n)
	{
		printf("\nOverflow");
		exit(1);
	}
	else
	{
		printf("\nPeak Element : %d",top->data);
	}
}
int main()
{
	int a=0,num=0;
	while(a!=5)
	{
		printf("\n\n1 Push\n2 Pop\n3 Peak\n4 Display\n\n");
		printf("Choice:");
		scanf("%d",&a);
		switch(a){
			case 1:
				printf("\nEnter Element :");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				peak;
				break;
			case 4:
				dis();
				break;
		}
	}
	return 0;
}
