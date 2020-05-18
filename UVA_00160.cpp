#include <stdio.h>
#define N 101

int k, var[(N>>5)+1], primes[N];

int nk, powerFactor[101][N];

void calculation();
void decomp(int n);
void bsieve();
bool checkprime(int n,int pos);
int setnotprime(int n,int pos);

int main(void)
{
    int n, i, j;

    calculation();
    int out[k];

    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;

        for(i = 0; i < k; i++)
        {
            out[i] = 0;
            for(j = 2; j <= n; j++)
                out[i]+= powerFactor[j][i];
        }

        printf("%3d! =",n);

        i = j = 0;
        while(i < k)
        {
            if(out[i] == 0)
            {
                i++;
                continue;
            }
            j++;
            if(j == 16)
                printf("\n      ");
            printf("%3d", out[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}

void calculation()
{
    int i;
    bsieve();

    for(i = 2; i < N; i++)
        decomp(i);
}

void bsieve()
{
    int i,j;

    for(i=3; i<=N; i++)
        if(!checkprime(var[i>>5],i&31))
            for(j=i*i; j<=N; j+=2*i)
                var[j>>5]=setnotprime(var[j>>5],j&31);

    primes[k++]=2;
    for(i=3; i<=N; i+=2)
        if(!checkprime(var[i>>5],i&31))
            primes[k++]=i;
}

int setnotprime(int n,int pos)
{
    return n|(1<<pos);
}

bool checkprime(int n,int pos)
{
    return (bool)(n&(1<<pos));
}

void decomp(int n)
{
    int i, cnt, st = n, nk = 0;
    for(i=0; i<k; i++)
    {
        if(n%primes[i]==0)
        {
            cnt=0;
            while(n%primes[i]==0)
            {
                cnt++;
                n/=primes[i];
            }
            powerFactor[st][nk] = cnt;
            nk++;
        }
        else
        {
            powerFactor[st][nk] = 0;
            nk++;
        }
    }
}
