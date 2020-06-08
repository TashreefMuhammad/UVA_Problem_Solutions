#include <stdio.h>
#include <math.h>

int main(void)
{
    int t, n, i;
    double sum, val, hi, lo;

    while(1)
    {
        scanf("%d",&n);

        if(n == 0)
            break;

        double price[n];
        sum = 0.0;

        for(i = 0; i < n; i++)
        {
            scanf("%lf",&price[i]);
            price[i] *= 100.0;
            sum += price[i];
        }

        sum /= (double)n;
        lo = hi = 0;

        for(i = 0; i < n; i++)
        {
            if(price[i] < sum)
                lo += (int)(sum-price[i]);
            else
                hi += (int)(price[i]-sum);
        }

        lo /= 100.0;
        hi /= 100.00;

        printf("$%.2lf\n", lo > hi ? lo:hi);
    }

    return 0;
}
