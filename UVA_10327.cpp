#include <stdio.h>

int main(void)
{
    int n, i, j, tmp, cnt;

    while(scanf("%d",&n) != EOF)
    {
        cnt = 0;
        int a[n];
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);

        for(i = 0; i < n-1; i++)
            for(j = 0; j < n-1; j++)
                if(a[j] > a[j+1])
                {
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    cnt++;
                }
        printf("Minimum exchange operations : %d\n",cnt);
    }

    return 0;
}
