#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
void sieve();
int main(void)
{
    long int i,n,nr,sum,power;
    string s;
    sieve();
    while(cin>>s)
    {
        power=1;
        n=nr=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            nr+=(s[i]-'0')*power;
            n+=(s[l-i-1]-'0')*power;
            power*=10;
        }
        if(n<10 || n==nr)
        {
            if(dp[n]==0)
                printf("%ld is prime.\n",n);
            else
                printf("%ld is not prime.\n",n);
        }
        else
        {
            if(dp[n]==1)
                printf("%ld is not prime.\n",n);
            else if(dp[n]==0 && dp[nr]==1)
                printf("%ld is prime.\n",n);
            else
                printf("%ld is emirp.\n",n);
        }
    }

    return 0;
}
void sieve()
{
    int i,j;
    dp[0]=dp[1]=1;
    for(i=4;i<=1000000;i+=2)
        dp[i]=1;
    for(i=3;i*i<=1000000;i+=2)
        if(dp[i]==0)
            for(j=i*i;j<=1000000;j+=2*i)
                dp[j]=1;
}
