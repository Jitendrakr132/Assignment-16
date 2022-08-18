#include<stdio.h>
int main()
{
    int a[2][2],i,j,max=0,sum=0;
    printf("Enter the numbers");
    for(i=0;i<=1;i++)
        for(j=0;j<=1;j++)
    {
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            if(a[i][j]==1)
            {
                sum=sum+a[i][j];
            }
           if(sum>max)
           {
               max=sum;
           }
        }
    }
    printf("max number%d",max);
}
