#include <bits/stdc++.h>
using namespace std;
int dp[20000];
void sieve();
int main(void)
{
    string s;
    int sum;
    sieve();
    while(cin>>s)
    {
        sum=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                sum+=s[i]-'a'+1;
            else if(s[i]>='A'&&s[i]<='Z')
                sum+=s[i]-'A'+27;
        }
        if(dp[sum]==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
void sieve()
{
    int i,j;
    dp[0]=1;
    for(i=4;i<=20000;i+=2)
        dp[i]=1;
    for(i=3;i*i<=20000;i+=2)
        if(dp[i]==0)
            for(j=i*i;j<=20000;j+=2*i)
                dp[j]=1;
}
