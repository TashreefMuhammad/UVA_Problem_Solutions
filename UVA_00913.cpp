#include <stdio.h>

int main(void)
{
    long long n;

    while(scanf("%lld", &n) != EOF)
    {
        if(n == 1)
            printf("1\n");
        else
        {
            n = (n+1)>>1;
            n *= n;
            printf("%lld\n", n*n - (n-3)*(n-3));
        }
    }

    return 0;
}
