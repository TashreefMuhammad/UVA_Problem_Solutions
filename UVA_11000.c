#include <stdio.h>

int main(void)
{
    long N, mx, i, male[46], fibo[46];

    mx = 1;
    male[0] = 0, fibo[0] = 1;
    male[1] = 1, fibo[1] = 1;

    while(1)
    {
        scanf("%ld", &N);

        if(N == -1)
            break;

        if(N > mx)
        {
            for(i = mx + 1; i <= N; ++i)
            {
                male[i] = male[i - 1] + male[i - 2] + 1;
                fibo[i] = fibo[i - 1] + fibo[i - 2];
            }
            mx = N;
        }
        printf("%ld %ld\n", male[N], male[N] + fibo[N]);
    }

    return 0;
}
