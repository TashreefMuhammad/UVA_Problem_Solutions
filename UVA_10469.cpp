#include <stdio.h>

int main(void)
{
    int a, b, ar_a[32], ar_b[32], out[32], val, p, i;

    while(scanf("%d %d",&a,&b) != EOF)
    {
        for(i = 0; i < 32; i++)
        {
            ar_a[i] = a%2;
            ar_b[i] = b%2;
            a/=2;
            b/=2;
        }
        for(i = 0; i < 32; i++)
        {
            if((ar_a[i]+ar_b[i])&1)
                out[i] = 1;
            else
                out[i] = 0;
        }
        val = 0;
        p = 1;
        for(i = 0; i < 32; i++, p*=2)
            val+=out[i]*p;
        printf("%d\n",val);
    }

    return 0;
}
