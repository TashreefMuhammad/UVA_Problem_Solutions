#include <stdio.h>
#include <math.h>
#define N 70000

int k,nk,var[(N/32)+1];
long long primes[N],e[N];

void bsieve();
void decomp(long long n);
bool checkprime(int n,int pos);
int setnotprime(int n,int pos);
int main(void)
{
    long long n,i;
    bsieve();
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        decomp(n);
        long out=1;
        for(i=0;i<nk;i++)
            out=out*(e[i]+1);
        if(out%2==0)
            printf("no\n");
        else
            printf("yes\n");
        nk=0;
    }

    return 0;
}

void bsieve()
{
    long long i,j;
    for(i=3;i<=N;i++)
        if(!checkprime(var[i/32],i%32))
            for(j=i*i;j<=N;j+=2*i)
                var[j/32]=setnotprime(var[j/32],j%32);
    primes[k++]=2;
    for(i=3;i<=N;i+=2)
        if(!checkprime(var[i/32],i%32))
            primes[k++]=i;
}

bool checkprime(int n,int pos)
{
    return (bool) (n&(1<<pos));
}

int setnotprime(int n,int pos)
{
    return n|(1<<pos);
}

void decomp(long long n)
{
    int i,cnt,sqrtn=sqrt(n);
    for(i=0;i<k && primes[i]<=sqrtn;i++)
    {
        if(n%primes[i]==0)
        {
            cnt=0;
            while(n%primes[i]==0)
            {
                cnt++;
                n/=primes[i];
            }

            if(cnt>0)
                e[nk++]=cnt;
        }
    }
    if(n!=1)
        e[nk++]=1;
}
