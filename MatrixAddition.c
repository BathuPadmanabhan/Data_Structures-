#include<stdio.h>

int main()
{
	int m1[2][2] = {{1,2},
	                {3,4}};
	int m2[2][2] = {{1,2},
	    			{3,4}};
	int sum=0,i,j;
	
	printf("THe Matrix : \n");
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			//printf("%d ",m1[i][j]);
			
			sum += m1[i][j]+m2[i][j];
			printf("%d ",sum);
		}
		sum =0;
		printf("\n");
	}
}
