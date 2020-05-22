#include <stdio.h>

int main(void)
{
    int n, i, j, in, dp[21][21];

    scanf("%d",&n);

    int corr[n], new_seq[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d",&in);
        corr[in-1] = i;
    }

    while(scanf("%d",&in) != EOF)
    {
        new_seq[in-1] = 0;
        for(i = 1; i < n; i++)
        {
            scanf("%d",&in);
            new_seq[in-1] = i;
        }

        for(i = 0; i <=n; i++)
            dp[0][i] = dp[i][0] = 0;

        for(i = 1; i <=n; i++)
            for(j = 1; j <=n; j++)
            {
                if(corr[i-1] == new_seq[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
            }
        printf("%d\n", dp[n][n]);
    }

    return 0;
}
