#include <stdio.h>

int main(void)
{
    long long l, h, mx, val, i, x, cnt;

    while(scanf("%lld %lld", &l, &h) != EOF)
    {
        if(l == 0 && h == 0)
            break;

        mx = -1;
        if(l > h)
        {
            l += h;
            h = l - h;
            l -= h;
        }

        for(i = l; i <= h; ++i)
        {
            x = i;
            cnt = 0;

            do
            {
                if(x&1)
                    x = 3*x + 1;
                else
                    x >>= 1;
                cnt++;
            }while(x != 1);

            if(cnt > mx)
            {
                mx = cnt;
                val = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", l, h, val, mx);
    }

    return 0;
}
