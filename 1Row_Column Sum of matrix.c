#include <stdio.h>

int main()
{
    int m,n;       
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);   
    int arr[m][n];   
    printf("Enter the elements \n");
    int i,j;
    for(i=0;i<m;i++)     
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements :\n");
    for(i=0;i<m;i++) 
   {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nrow :\n");
    for(i=0;i<m;i++)   
    {
        int rsum=0;
        for(j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum in row %d : %d\n",i,rsum);
    }
    printf("\ncolumn\n");
    for(i=0;i<m;i++)
    {
        int csum=0;
        for(j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum in column %d : %d\n",i,csum);
    }
    return 0;
}
