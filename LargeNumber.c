#include <stdio.h>
void main()
{
    int ar[] = {8,1,4,9,1,-1};
    int  i;
    int large = ar[0];
    for(i=1;i<6;i++)
    {
        if(large < ar[i])
        {
            large = ar[i];
        }

    }
    printf("thE LARGEST VALUE IS %d",large);

}
