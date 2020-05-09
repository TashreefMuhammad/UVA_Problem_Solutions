#include <stdio.h>

int main(void)
{
    int n, m, st_m, cnt;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &m);
        st_m = m;

        cnt = 0;
        while(st_m)
        {
            if(st_m&1)
                cnt++;
            st_m>>= 1;
        }
        printf("%d ",cnt);

        cnt = 0;
        while(m)
        {
            st_m = m%10;
            m/=10;
            if(st_m == 0)
                continue;
            else if(st_m == 7)
                cnt+=3;
            else if(st_m == 3 || st_m == 5 || st_m == 6 || st_m == 9)
                cnt+=2;
            else
                cnt++;
        }
        printf("%d\n",cnt);
    }

    return 0;
}
