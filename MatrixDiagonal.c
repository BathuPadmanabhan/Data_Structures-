#include<stdio.h>

int main()
{
	int i,j,sum = 0;
	int m[2][2] = {{1,2},
	              {3,4}};
	 
	 printf("The Matrix : \n")   ;            
	for(i=0;i<2;i++)
	{
		sum += m[i][i];
		for(j =0;j<2;j++)
		{
		printf("%d ",m[i][j]);
	    }
	    printf("\n");
	}
	printf("\nSum of Diagonal is : %d",sum);
	printf("\n\nDone By Padmanabhan S\n192324076");

}
