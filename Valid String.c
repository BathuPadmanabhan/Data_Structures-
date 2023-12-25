#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("\nEnter string :");
	for(int i=0;i<20;i++)
	{
		scanf("%s",&a[i]);
	}
	int j=strlen(a);
	printf("%d",j);
	if(a[0]=='{'&& a[j]=='}')
	{
		printf("\nString is Valid");
	}
	else 
	{
		printf("\nInvalid string");
	}
	return 0;
}
