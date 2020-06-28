#include <stdio.h>

int N, p[33], out[17] = {1};

void backtrack(int node, int vis[]);

int main(void)
{
    int n, ts = 0;
    p[3] = p[5] = p[7] = p[11] = p[13] = p[17] = p[19] = p[23] = p[29] = p[31] = 1;

    while(scanf("%d", &N) != EOF)
    {
        if(ts)
            printf("\n");
        printf("Case %d:\n", ++ts);
        int vis[N+1] = {0};
        backtrack(1, vis);
    }

    return 0;
}

void backtrack(int node, int vis[])
{
    int i;
    if(node == N)
    {
        if(p[out[node-1]+1])
        {
            printf("1");
            for(i = 1; i < N; i++)
                printf(" %d", out[i]);
            printf("\n");
        }
    }
    else
    {
        for(i = 2; i <= N; i++)
            if(!vis[i] && p[i+out[node-1]])
            {
                vis[i] = 1;
                out[node] = i;

                backtrack(node + 1, vis);
                vis[i] = 0;
            }
    }
}
