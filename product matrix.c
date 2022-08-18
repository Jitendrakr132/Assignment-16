#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum,c[3][3],i,j,k;
    printf("Enter the first matrix elements");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
             {

            scanf("%d",&a[i][j]);
    }
    printf("Enter the second matrix elements:");
    for(i=0;i<=2;i++)

        for(j=0;j<=2;j++)
        {
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
            {
            sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    }
    for(i=0;i<=2;i++)
  {

     for(j=0;j<=2;j++)
     {

        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}

