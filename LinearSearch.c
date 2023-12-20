#include<stdio.h>

void main()
{
	int i,target;
	scanf("%d",&target);
	int a[] = {1,2,3,4,5,6,7,8};
	int s = sizeof(a)/sizeof(a[0]);
	for(i=0;i<s;i++)
	{
		if(target == a[i])
		{
			printf("The value of key %d",target);
			printf("The Index : %d",i);
		}
	}
}
