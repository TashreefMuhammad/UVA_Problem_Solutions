#include <stdio.h>

#define N 1001

int k, var[(N/32)+1], primes[N], nk[N];

void bsieve();
bool checkprime(int n,int pos);
int setnotprime(int n,int pos);

int main(void)
{
    bsieve();

    int n, c, i, j, start;
    while(scanf("%d %d", &n, &c) != EOF)
    {
        printf("%d %d:", n, c);

        if(nk[n]&1)
            j = 2*c - 1;
        else
            j = 2*c;

        if(j >= nk[n])
        {
            start = 0;
            j = nk[n];
        }
        else
            start = (nk[n] - j)>>1;

        for(i = 0; i < j; i++)
            printf(" %d", primes[start+i]);
        printf("\n\n");
    }
    return 0;
}

void bsieve()
{
    int i, j;
    for(i = 3; i<= N; i++)
        if(!checkprime(var[i/32],i%32))
            for(j = i*i; j <= N; j += 2*i)
                var[j/32] = setnotprime(var[j/32],j%32);

    /// Question says 1 is a prime -_-
    primes[k++] = 1;
    nk[1] = k;
    primes[k++] = 2;
    nk[2] = k;
    for(i=3; i <= N; i++)
    {
        if(i&1 && !checkprime(var[i/32],i%32))
            primes[k++] = i;
        nk[i] = k;
    }
}

bool checkprime(int n,int pos)
{
    return (bool) (n&(1<<pos));
}

int setnotprime(int n,int pos)
{
    return n|(1<<pos);
}
