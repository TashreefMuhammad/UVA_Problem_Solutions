#include <stdio.h>

int main(void)
{
    long long n, m, i, j, proc_n, proc_m;

    while(1)
    {
        scanf("%lld %lld", &n, &m);

        if(n == 0 && m == 0)
            break;

        i = n-m+1;
        j = 1;
        proc_n = proc_m = 1;

        while(i <= n || j <= m)
        {
            if(i <= n)
                proc_n*=i++;
            if(j <= m)
                proc_m*=j++;
            if(proc_n%proc_m == 0)
            {
                proc_n/= proc_m;
                proc_m= 1;
            }
        }

        printf("%lld things taken %lld at a time is %lld exactly.\n", n, m, proc_n/proc_m);
    }

    return 0;
}
