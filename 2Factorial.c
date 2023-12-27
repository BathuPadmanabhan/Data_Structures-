
#include<stdio.h>

int fact(int x)
{
	int f=1,i;
	if(x<=0)
	{
		return 1;
	}
	else
	{
		for(i=x;i>0;i--)
		{
			f = f*i;
		}
	}
	
	return f;
}


int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	fact(num);
	printf("\nThe Factorial of %d is : %d",num,fact(num));
	printf("\n\nDone By Padmanabhan S\n192324076");
	
	
}
