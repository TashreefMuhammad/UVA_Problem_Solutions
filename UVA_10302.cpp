#include <stdio.h>

int main(void)
{
    long long x;

    while(scanf("%lld",&x) != EOF)
    {
        x = (x * (x+1)) >> 1;
        printf("%lld\n", x*x);
    }

    return 0;
}
