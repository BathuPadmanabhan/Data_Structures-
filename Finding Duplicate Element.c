#include<stdio.h>
int main()
{
	int i,j,s;
  int sum=0,r;
  printf("Size : ");
  scanf("%d",&s);
	int a[s];
	printf("\nEnter the elements: \n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(arr[i]==arr[j])
			{
        sum++;
			}
		}
		if(sum!=1)
		{
			if(a[i]!=r)
			printf(" %d",a[i]);
			r=a[i];
		}
    sum=0;
	}
	return 0;
}
