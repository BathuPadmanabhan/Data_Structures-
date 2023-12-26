
#include <stdio.h>
void main()
{
    int i,k,j,temp;
    int a[] = {8,1,4,9,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
              if(a[i]>a[j])
              {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
              }
           }
           
     }
     printf("Descending Order : ");
     for(k=0;k<n;k++)
     {
       printf("%d ",a[k]);
     }
     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
              if(a[i]<a[j])
              {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
              }
           }
           
     }
     printf("\nAscending Order : ");
     for(k=0;k<n;k++)
     {
       printf("%d ",a[k]);
     }
     


}
