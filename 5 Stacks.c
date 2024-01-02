#include<stdio.h>

    int size,num,top;
	int s[5];  

int full()
{
	if ( top == (size-1))
	    return 1;
	else
	     return 0;
    return 0;
}

int empty()
{
	if(top==-1)
	   return 1;
	else
	   return  0;
    return 0;
}

int push(int num)
{
	if(!full())
	{
		s[top]=num;
		top=top+1;
	}
}
int pop()
{
	if(!empty())
	{
		num=s[top];
		top=top-1;
	}
	
}

int peak()
{
	
	return s[top];
}

void dis()
{
	int i;
	
	for(i=top;i>=0;i--)
	{
		printf("%d ",s[i]);
	}
	
}

int main()
{
    s[size];
    top = s[0];
	int j,i=0,c;
	
	
	while(i!=5)
	{
		printf("StACKS\n1 Push\n2 Pop\n3 Peak\n4 Display\n5 Exit\n");
	    printf("Choice : ");
	    scanf("%d",&c);
		
	
	switch(c){

		
		case 1:
			printf("\n");
		
			printf("Enter the values : ");
			for(j=0;j>size;j++)
			{
				scanf("%d",&num);
		    	push(num);
		    }
			break;

		case 2:
			pop();
			break;
		case 3:
			peak();
			break;
		case 4:
			dis();
			break;
		
        }
   }
}
