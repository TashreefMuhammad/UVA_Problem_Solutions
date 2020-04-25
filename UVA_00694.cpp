#include <stdio.h>

long long func(long long A, long long L);

int main(void)
{
    long long a, l, t = 0;

    while(1)
    {
        scanf("%lld %lld",&a,&l);
        if( a< 0 && l < 0)
            break;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", ++t, a, l, func(a,l));
    }

    return 0;
}

long long func(long long A, long long L)
{
    int cnt = 0;

    while(A <= L)
    {
        cnt++;

        if(A == 1)
            break;
        if(A&1)
            A = 3*A+1;
        else
            A>>=1;
    }

    return cnt;
}
