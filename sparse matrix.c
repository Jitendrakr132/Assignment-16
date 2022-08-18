#include<stdio.h>
#define row 4
#define col 3
# define max 10
int  main()
{
    int original[row][col]={0,5,0,0,0,8,0,0,0,1,0,0},i,j,count=0;

            if(count<(row*col)/2)
                printf("sparse matrix");
            else
            {
                printf("denis matrix");
            }
        return 0;
}
