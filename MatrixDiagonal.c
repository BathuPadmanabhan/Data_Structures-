#include<stdio.h>

int main()
{
	int i,j,sum = 0;
	int m[2][2] = {{1,2},
	              {2,3}};
	                
	for(i=0;i<2;i++)
	{
		sum += m[i][i];
	}
	printf("Sum of Diagonal is : %d",sum);

}
