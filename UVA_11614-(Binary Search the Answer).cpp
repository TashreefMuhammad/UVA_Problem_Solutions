#include <stdio.h>
#include <math.h>

int main(void)
{
    long long t,n,out,lo,hi,mid,tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        lo=0;
        hi=sqrt(n)*5;
        while(lo<=hi)
        {
            mid=(lo+hi)>>1;
            if(mid%2==0)
            {
                tmp=mid>>1;
                tmp*=(mid+1);
            }
            else
            {
                tmp=(mid+1)>>1;
                tmp*=mid;
            }
            if(tmp<=n)
            {
                out=mid;
                lo=mid+1;
            }
            else
                hi=mid-1;
        }
        printf("%lld\n",out);
    }
    return 0;
}
