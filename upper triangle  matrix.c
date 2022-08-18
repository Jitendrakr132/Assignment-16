#include<stdio.h>
int main()
{
    int a[30][30],i,j,n;
    printf("Enter the size of matrix:");
    scanf("%d",&n);

    printf("Enter the elements ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);

    }
      for(i=0;i<n;i++)
      {
          printf("\n");
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
           printf("%d ",a[i][j]);
            }
            else
            {
                printf("0 ");
            }

        }

      }
      return 0;
    }


