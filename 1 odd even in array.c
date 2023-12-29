#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter the size :");
	scanf("%d",&n);  
	int a[n];
	printf("\nEnter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nOdd numbers: ");
	for(i=0;i<n;i++){
		if(a[i]%2!=0)
		printf("%d ",a[i]);
	}
	printf("\nEven numbers: ");
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
	return 0;
}
