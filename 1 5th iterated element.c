#include <stdio.h>

int main() 
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
 {
    	if(i==4)
    {
    		printf("%d",a[i]);
    		break;
		}
	}
    return 0;
}
