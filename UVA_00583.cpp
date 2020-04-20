#include <stdio.h>
#include <math.h>
#define N 46340

int k,var[(N/32)+1],primes[N];

void bsieve();
void decomp(long n);
bool checkprime(int n,int pos);
int setnotprime(int n,int pos);

int main(void)
{
    long n;
    bsieve();
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
            break;
        printf("%ld = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-n;
        }
        decomp(n);
        printf("\n");
    }

    return 0;
}

void bsieve()
{
    int i,j;
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

void decomp(long n)
{
    int i,sqrtn=sqrt(n);
    for(i=0;i<k && primes[i]<=sqrtn;i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                if(n!=1)
                    printf("%d x ",primes[i]);
                else
                    printf("%d",primes[i]);
            }
        }
    }
    if(n!=1)
        printf("%ld",n);
}
