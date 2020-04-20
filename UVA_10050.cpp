#include <stdio.h>

int main(void)
{
    int t, n, p, h, i, j, cnt;

    scanf("%d",&t);

    while(t--)
    {
        cnt = 0;
        scanf("%d %d",&n,&p);
        int days[n];

        for(i = 0; i < n; i++)
            days[i] = 0;

        for(i = 0; i < p; i++)
        {
            scanf("%d",&h);
            for(j = h; j <= n; j+=h)
                if(j%7 != 0 && (j+1)%7!=0)
                    days[j-1] = 1;
        }

        for(i = 0; i < n; i++)
            if(days[i] == 1)
                cnt++;
        printf("%d\n",cnt);
    }

    return 0;
}
