#include <stdio.h>
#include <math.h>

int knapsack(int w[], int n, int c);

int main(void)
{
    int t, n, i, sum;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int w[n+1];

        for(i = 1, sum = 0; i <= n; i++)
        {
            scanf("%d", &w[i]);
            sum += w[i];
        }

        printf("%d\n", abs(sum - 2*knapsack(w, n, sum>>1)));
    }

    return 0;
}

int knapsack(int w[], int n, int c)
{
    int i, j, mat[n+1][c+1];
    for(i = 0; i <= n; i++)
        mat[i][0]=0;
    for(j = 0; j <= c; j++)
        mat[0][j]=0;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= c; j++)
        {
            if(w[i] > j)
                mat[i][j] = mat[i-1][j];
            else
                mat[i][j]= w[i]+mat[i-1][j-w[i]] > mat[i-1][j] ? w[i]+mat[i-1][j-w[i]] : mat[i-1][j];
        }

    return mat[n][c];
}
