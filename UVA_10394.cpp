#include <stdio.h>
#include <vector>

using namespace std;

bool dp[20000000];
vector <int> prime,paired;
void sieve();
int main(void)
{
    int s;
    sieve();
    while(scanf("%d",&s)!=EOF)
        printf("(%d, %d)\n",prime[s-1],paired[s-1]);
    return 0;
}
void sieve()
{
    long long i,j;
    dp[0]=dp[1]=true;
    for(i=4;i<20000000;i+=2)
        dp[i]=true;
    for(i=3;i*i<20000000;i+=2)
        if(dp[i]==false)
            for(j=i*i;j<20000000;j+=2*i)
                dp[j]=true;
    for(i=2;i<20000000;i++)
        if(dp[i]==false&&dp[i+2]==false)
        {
            prime.push_back(i);
            paired.push_back(i+2);
        }
}
