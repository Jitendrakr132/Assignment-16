#include<stdio.h>
int main()
{
    int a[2][2],i,j,rowsum,cosum;
    printf("Enter the matrix elements");
    for(i=0;i<=1;i++)
        for(j=0;j<=1;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<=1;i++)
    {
        rowsum=0;
        for(j=0;j<=1;j++)
        {
        rowsum+=a[i][j];
            }
        printf(" sum of %d row= %d\n",i,rowsum);
    }
       cosum=0;
        for(j=0;j<=1;j++)
        {
         for(i=0;i<=1;i++)
              {
            cosum+=a[i][j];
        }
    printf("\n sum of %d column= %d",j,cosum);
    }
}

