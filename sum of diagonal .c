#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the matrix:");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {
             sum+=a[i][j];
            }
        }
    }
    printf("sum %d",sum);

}
