#include <stdio.h>

int main(void)
{
    long long i,t,j,n,m,deno,in,t1,t2,t3;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        int ar[n];
        m=1;
        deno=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&in);
            ar[j]=in;
            m*=in;
        }
        for(j=0;j<n;j++)
            deno+=m/ar[j];
        m*=n;
        t1=m;
        t2=deno;
        while(t1%t2)
        {
            t3=t1;
            t1=t2;
            t2=t3%t2;
        }
        m/=t2;
        deno/=t2;
        printf("Case %lld: %lld/%lld\n",i+1,m,deno);
    }

    return 0;
}
