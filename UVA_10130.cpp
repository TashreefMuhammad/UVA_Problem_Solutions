#include <stdio.h>

int knapsack(int n, int c, int p[], int w[]);

int main(void)
{
    int t, n, c, g, i, out;

    scanf("%d", &t);

    while(t--)
    {
        out = 0;
        scanf("%d", &n);
        int p[n+1], w[n+1];

        for(i = 1; i <= n; i++)
            scanf("%d %d", &p[i], &w[i]);

        scanf("%d", &g);
        while(g--)
        {
            scanf("%d", &c);
            out+=knapsack(n, c, p, w);
        }

        printf("%d\n", out);
    }

    return 0;
}

int knapsack(int n, int c, int p[], int w[])
{
    int i, j, mat[n+1][c+1];

    for(i = 0; i <= n; i++)
        mat[i][0] = 0;
    for(j = 0; j <= c; j++)
        mat[0][j] = 0;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= c; j++)
        {
            if(w[i] > j)
                mat[i][j] = mat[i-1][j];
            else
                mat[i][j] = p[i]+mat[i-1][j-w[i]] > mat[i-1][j] ? p[i]+mat[i-1][j-w[i]] : mat[i-1][j];
        }

    return mat[n][c];
}

