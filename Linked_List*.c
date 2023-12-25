#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *head, *tail, *n;

void in_be(int num)
{
    n = (struct node*)malloc(sizeof(struct node));
    n ->data = num;
    n ->next = NULL;
    if(head == NULL)
    {
        head = n;
        tail = n;
    }
    else
      n ->next = head;
      head = n;
}

void in_end (int num)
{
   n = (struct node*)malloc(sizeof(struct node));
   n->data = num;
   n->next = NULL;
   if( head == num)
   {
    head=n;
    tail=n;
   }
   else
    {
        tail->next = n;
        tail = n;
    }
}
void in_mid(int num)
{
    struct node *t;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = num;
    n->next = NULL;
    for(t=head;t!=NULL;t = t->next)
    {
        if(t->data == num)
           break;
        
    }
    n->next = t->next;
    t->next=n;
} 

void de_be()
{
    struct node *t;
    t=head;
    head = t->next;
    free(t);
}

void de_end()
{
    struct node *t,*tp;
    for(t=head;t!=NULL;t = t->tail)
    {
      tp = t;
      t =t ->next;

    }
    tail = tp;
    tail->next = NULL;
    free(t);
}
void del_mid(int pos){
	struct node *t,*tp;
	t=head;
	while(t->data!=pos){
		tp=t;
		t=t->next;
	}
	tp->next=t->next;
	free(t);
}
void search(int key){
	struct node *t;
	for(t=head;t!=NULL;t=t->next){
		if(t->data==key){
			printf("\nElement found at %d",t);
			break;
		}
	    else{
	        printf("\nElement not found");
	        break;
        }
    }
}
void bubbleSort() {
    int swapped;
    struct Node* first;
    struct Node* last = NULL;

    // Checking for empty list
    if (head == NULL)
        return;

    do {
        swapped = 0;
        first = head;

        while (first->next != last) {
            if (first->data > first->next->data) {
                int temp = first->data;
                first->data = first->next->data;
                first->next->data = temp;
                swapped = 1;
            }
            first = first->next;
        }
        last = first;
    } while (swapped);
}
void min_max()
{
   struct node* t;
   int min = head -> data;
   int max = head -> data;
   for(t = head;t!=NULL;t = t->next)
   {
     if(t-> data > max)
     {
        max = t->data;
     }
     else if(t-> data < min)
     {
        min = t-> data;
     }
   }
   printf("\nMinimum is %d\nMaximum is %d",min,max);
}

void display ()
{
    struct node *n;
    for(n = head;n!=NULL;n = n ->next)
    {
        printf("%d ",*n);
    }

}

int main()
{
in_be(90);
in_be(80);
in_be(50);
in_be(20);
in_be(15);
in_be(7);
printf("The Array : ");
display();
    printf("\n1 Insert a Number\n2 Insert at End\n3 Insert at Middle\n");
    printf("4 Delete at First\n5 Delete at End\n6 Delete at middle");
    printf("\n7 SEARCH\n8 Sort the Array\n9 Find Minimum and Maximum");
    int c,num;
    printf("\n\nEnter your choice : ");
    scanf("%d",&c);
 scanf("%d",&num);
    switch(c)
        {
            case 1:
                 scanf("%d",&num);
                in_be(num);
                display();
                break;
            case 2:
                 scanf("%d",&num);
                in_end(num);
                display();
                break;
            case 3:
                 scanf("%d",&num);
                in_mid(num);
                display();
                break;
            case 4:
                 scanf("%d",&num);
                de_be(num);
                display();
                break;
            case 5:
                 scanf("%d",&num);
                de_end(num);
                display();
                break;
            case 6:
                 scanf("%d",&num);
                de_mid(num);
                display();
                break;
            case 7:
                 int pos;
                 printf("\nEnter position : ");
                 scanf("%d",&pos);
                 search();
            case 8:
                sort();
                display();
            case 9:
                min_max();
   display();
   
}
