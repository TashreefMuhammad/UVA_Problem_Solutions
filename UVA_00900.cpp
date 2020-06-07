#include <stdio.h>

long long fib[51];

long long fibonacci(long long n);

int main(void)
{
    long long n;
    fib[0] = 1;
    fib[1] = 1;
    while(1)
    {
        scanf("%lld",&n);
        if(n == 0)
            break;
        printf("%lld\n", fibonacci(n));
    }

    return 0;
}

long long fibonacci(long long n)
{
    if(n == 0 || n == 1)
        return fib[n];
    else if(fib[n] != 0)
        return fib[n];
    else
        return fib[n] = fibonacci(n-1) + fibonacci(n-2);
}
