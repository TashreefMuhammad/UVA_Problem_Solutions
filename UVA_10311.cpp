#include <bits/stdc++.h>
using namespace std;
int dp[100000001];
void sieve();
int main(void)
{
    int n,i,sum;
    sieve();
    while(cin>>n)
    {
        if(n%2!=0)
        {
            if(n>4 && dp[n-2]==0)
                printf("%d is the sum of 2 and %d.\n",n,n-2);
            else
               printf("%d is not the sum of two primes!\n",n);
        }
        else
        {
            for(i=(n/2)-1;i>=0;i--)
                if(dp[i]==0 && dp[n-i]==0)
                        break;
            if(i<0)
                printf("%d is not the sum of two primes!\n",n);
            else
                printf("%d is the sum of %d and %d.\n",n,i,n-i);
        }
    }
    return 0;
}
void sieve()
{
    int i,j;
    dp[0]=dp[1]=1;
    for(i=4;i<=100000000;i+=2)
        dp[i]=1;
    for(i=3;i*i<=100000000;i+=2)
        if(dp[i]==0)
            for(j=i*i;j<=100000000;j+=2*i)
                dp[j]=1;
}
