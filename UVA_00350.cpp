#include <stdio.h>

int main(void)
{
    int z, i, m, l, j, cnt, ts = 0;

    while(1)
    {
        scanf("%d %d %d %d", &z, &i, &m, &l);

        if(z + i + m + l == 0)
            break;

        l = (z * j + i) % m;
        j = l;
        cnt  = 0;

        do
        {
            cnt++;
            j = (z * j + i) % m;
        }while(j != l);

        printf("Case %d: %d\n", ++ts, cnt);
    }

    return 0;
}
