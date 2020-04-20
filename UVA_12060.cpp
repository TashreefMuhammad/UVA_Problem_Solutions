#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n,j,in,avg,asize,csize,bsize,t1,t2,t3,i=0;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        avg=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&in);
            avg+=in;
        }
        t1=abs(avg);
        t2=n;
        while(t1%t2)
        {
            t3=t1;
            t1=t2;
            t2=t3%t2;
        }
        avg/=t2;
        n/=t2;
        csize=(long long)floor(log(n)/log(10))+1;
        printf("Case %lld:\n",++i);
        if(avg<0)
            bsize=(long long)floor(log(-1*(avg%n))/log(10))+1;
        else if(avg>0)
            bsize=(long long)floor(log(avg%n)/log(10))+1;
        if(abs(avg)>=n)
        {
            if(n==1)
            {
                if(avg<0)
                    printf("- %lld\n",-1*avg);
                else
                    printf("%lld\n",avg);
            }
            else
            {
                if(avg<0)
                {
                    asize=(long long)floor(log(-1*(avg/n))/log(10))+1;
                    for(j=1;j<=csize+2+asize-bsize;printf(" "),j++);
                    printf("%lld\n",-1*(avg%n));
                    printf("- %lld",-1*(avg/n));
                    for(j=1;j<=csize;printf("-"),j++);
                    printf("\n");
                    for(j=1;j<=asize+2;printf(" "),j++);
                    printf("%lld\n",n);
                }
                else
                {
                    asize=(long long)floor(log(avg/n)/log(10))+1;
                    for(j=1;j<=csize+asize-bsize;printf(" "),j++);
                    printf("%lld\n",avg%n);
                    printf("%lld",avg/n);
                    for(j=1;j<=csize;printf("-"),j++);
                    printf("\n");
                    for(j=1;j<=asize;printf(" "),j++);
                    printf("%lld\n",n);
                }
            }
        }
        else
        {
            if(avg==0)
                printf("0\n");
            else if(avg<0)
            {
                for(j=1;j<=csize+2-bsize;printf(" "),j++);
                printf("%lld\n",-1*avg);
                printf("- ");
                for(j=1;j<=csize;printf("-"),j++);
                printf("\n  %lld\n",n);
            }
            else
            {
                for(j=1;j<=csize-bsize;printf(" "),j++);
                printf("%lld\n",avg);
                for(j=1;j<=csize;printf("-"),j++);
                printf("\n%lld\n",n);
            }
        }
    }

    return 0;
}
