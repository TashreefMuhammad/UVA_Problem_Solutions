#include <stdio.h>

int main(void)
{
    long long t,n,k,i,sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld %lld",&n,&k);
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i*i==n && i%k!=0)
                    sum+=i;
                else
                {
                    if(i%k!=0)
                        sum+=i;
                    if((n/i)%k!=0)
                        sum+=(n/i);
                }
            }
        }
        printf("%lld\n",sum);
    }

    return 0;
}
