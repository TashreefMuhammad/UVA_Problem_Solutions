#include <stdio.h>

int n, in[14], ans[7];

void DFS(int num, int index);

int main(void)
{
    int i, f = 0;

    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        if(f)
            printf("\n");
        f = 1;
        for(i = 1; i <= n; i++)
            scanf("%d", &in[i]);
        DFS(1, 1);
    }

    return 0;
}

void DFS(int num, int index)
{
    if(num == 7)
    {
        printf("%d", ans[1]);
        for(index = 2; index <= 6; index++)
            printf(" %d", ans[index]);
        printf("\n");
    }
    else
        while(index <= n)
        {
            ans[num] = in[index], DFS(num+1, index+1);
            index++;
        }
}
