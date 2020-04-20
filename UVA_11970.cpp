#include <stdio.h>
#include <math.h>

int main(void)
{
    int t,i;
    long long n,x,c;
    double val,val1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        c=0;
        printf("Case %d:",i+1);
        for(x=(long long)sqrt(n);x>0;x--)
        {
            c=n-(x*x);
            if(c%x==0 && c>0)
                printf(" %lld",c);
        }
        printf("\n");

    }

    return 0;
}
