#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
    int m, n, i, j, st, cost, mn, mx, val[3];

    while(scanf("%d %d", &m, &n) != EOF)
    {
        int mat[m][n], dp[m][n], out[m][n];

        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &mat[i][j]);

        for(i = 0; i < m; i++)
            dp[i][n-1] = mat[i][n-1];

        for(j = n-2; j >= 0; j--)
            for(i = 0; i < m; i++)
            {
                val[0] = (i - 1 + m) % m;
                val[1] = i;
                val[2] = (i + 1) % m;

                mn = min(val[0], min(val[1], val[2]));
                mx = max(val[0], max(val[1], val[2]));
                val[1] = val[0] + val[1] + val[2] - mx - mn;
                val[0] = mn;
                val[2] = mx;

                if(dp[val[0]][j+1] <= dp[val[1]][j+1] && dp[val[0]][j+1] <= dp[val[2]][j+1])
                    out[i][j] = val[0];
                else if(dp[val[1]][j+1] <= dp[val[0]][j+1] && dp[val[1]][j+1] <= dp[val[2]][j+1])
                    out[i][j] = val[1];
                else
                    out[i][j] = val[2];

                dp[i][j] = dp[out[i][j]][j+1] + mat[i][j];
            }

        cost = dp[0][0];
        st = 0;
        for(i = 1; i < m; i++)
            if(dp[i][0] < cost)
            {
                cost = dp[i][0];
                st = i;
            }
        printf("%d", st+1);

        for(i = 0; i < n-1; i++)
        {
            st = out[st][i];
            printf(" %d", st+1);
        }
        printf("\n%d\n", cost);
    }

    return 0;
}
