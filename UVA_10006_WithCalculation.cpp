#include <iostream>
#include <cstring>
#define N 65000

using namespace std;

int var[(N>>5)+1];
void bsieve();
bool checkprime(int n,int pos);
int setnotprime(int n,int pos);
long long bigmod(long long b, long long p, long long m);

int main(void)
{
    bsieve();
    int n, i;

    while(1)
    {
        cin >> n;
        if(n == 0)
            break;

        if(!checkprime(var[n>>5], n&31))
            cout << n << " is normal.\n";
        else
        {
            for(i = 2; i < n; i++)
                if(bigmod(i, n, n) != i)
                    break;

            if(i == n)
                cout << "The number " << n << " is a Carmichael number.\n";
            else
                cout << n << " is normal.\n";
        }
    }

    return 0;
}

void bsieve()
{
    long long i,j;

    for(i = 2; i<= N; i++)
        if(!checkprime(var[i>>5],i&31))
            for(j=i*i; j <= N; j += 2*i)
                var[j>>5]=setnotprime(var[j>>5],j&31);
}

int setnotprime(int n,int pos)
{
    return n|(1<<pos);
}

bool checkprime(int n,int pos)
{
    return (bool)(n&(1<<pos));
}

long long bigmod(long long b, long long p, long long m)
{
    int res = 1;
    while(p)
    {
        if(p&1)
            res = (res*b) % m;
        b = (b*b) % m;
        p >>= 1;
    }

    return res % m;
}
