#include<stdio.h>


int main()
{
	int num,c,i;
	int a=0,b=1;
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	
	printf("The Fibonacci Series : ");
	for(i=0;i<num;i++)
	{
		a = b;
		b = c;
		c = a + b;
	
	    printf("%d ",c);
    }
	printf("\n\nDone By Padmanabhan S\n192324076");
	
	
}
