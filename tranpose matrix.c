#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j;
    printf("Enter the matrix elements");
    for(i=0;i<=1;i++)

        for(j=0;j<=1;j++)
     {
        scanf("%d",&a[i][j]);

     }
     printf(" Real matrix \n ");
     for(i=0;i<=1;i++)
     {
         for(j=0;j<=1;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     for(i=0;i<=1;i++)
     {
         for(j=0;j<=1;j++)
         {
             b[j][i]=a[i][j];
         }
     }
     printf(" tranpose matrix \n");
     for(i=0;i<=1;i++)
     {
         for(j=0;j<=1;j++)
         {
             printf("%d ",b[i][j]);
         }
         printf("\n");
}
}
