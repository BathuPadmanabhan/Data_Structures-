#include<stdio.h>

int fib(int n)
{
    if(n<=1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}

int main()
{
	int i,num;
	printf("Enter any Integer :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d",fib(i));
	}
}
