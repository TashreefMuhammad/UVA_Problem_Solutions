#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
void sieve();
int main(void)
{
    int n,i,sum;
    sieve();
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=2;i+i<=n;i++)
        {
            if(dp[i]==0)
            {
                if(dp[n-i]==0)
                    break;
            }
        }
        printf("%d:\n",n);
        if(i+i>n)
            printf("NO WAY!\n");
        else
            printf("%d+%d\n",i,n-i);
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
            for(j=i*i;j<=1000000.;j+=2*i)
                dp[j]=1;
}
