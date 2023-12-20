#include<stdio.h>

void main()
{
	int a[] = {2,5,8,12,16,23,38,56,72,91};
	int i,t,size = sizeof(a)/sizeof(a[0]);
	int mid = (0+size-1)/2;
	scanf("%d",&t);

	if(a[mid] == t)
	{
		printf("The value of target %d \nIndex : %d",t,mid);
		//break;
	}
	else
	{
		if(t>a[mid])
		{
			for(i=(mid+1); i<size-1; i++)
			{
				if(a[i] == t){
					printf("The value of target %d\nIndex : %d",t,i);
					//break;
				}
			}
		}
		else
		{
			for(i=mid-1; i>=0; i--)
			{
				if(a[i]==t){
					printf("The value of target %d\nIndex : %d",t,i);
					
			    }
			}
		}
	}
	
}
