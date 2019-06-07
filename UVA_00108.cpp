/****
    * Problem ID        : UVA 108
    * Problem Name      : Maximum Sum
    * Required Topics   : Kadane's Algorithm (2D)
****/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,i,j,col_left,col_right,maximum,sum=0;

    scanf("%d",&n);

    //mat[][] will be the matrix to hold the whole 2D matrix input.
    //temp[] will serve as the keeper of maximum sum per row of the 2D matrix.
    int temp[n],mat[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);

    //As input is both positive & negative, INFINITY from math.h is used.
    //It ensures that maximum is initialized with lowest possible value.
    maximum=-INFINITY;

    //The idea here is to select a column. Then for every row apply
    //Kadane's algorithm using temp[]
    for(col_left=0;col_left<n;col_left++)
    {
        for(i=0;i<n;i++)
            temp[i]=0;
        for(col_right=col_left;col_right<n;col_right++)
        {
            for(i=0;i<n;i++)
                temp[i]+=mat[i][col_right];

            //Kadane's Algorithm.
            sum=0;
            for(i=0;i<n;i++)
            {
                sum+=temp[i];
                if(sum>maximum)
                    maximum=sum;
                if(sum<0)
                    sum=0;
            }
            //Algorithm finish
        }
    }

    printf("%d\n",maximum);

    return 0;
}
