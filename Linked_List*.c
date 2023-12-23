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

/*void de_end()
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
}*/

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
    int n;

   printf("Enter the size : ");
   scanf("%d",&n);
   printf("The Array : ");
   display();
   
}
