#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    long long i,t,j,k,la,lb,storeb,oran,andan,a,b;
    string bita,bitb;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        storeb=b;
        if(a==b)
            cout<<"Case "<<i+1<<": "<<a<<" "<<b<<endl;
        else
        {
            while(a)
            {
                bita+=(a%2)+'0';
                a/=2;
            }
            while(b)
            {
                bitb+=(b%2)+'0';
                b/=2;
            }
            lb=bitb.size();
            la=bita.size();
            if(lb>la)
                cout<<"Case "<<i+1<<": "<<(long long)pow(2,(double)lb)-1<<" 0"<<endl;
            else
            {
                long long out=0;
                for(j=lb-1;;j--)
                {
                    if(bitb[j]!=bita[j])
                        break;
                }
                for(k=j;k>=0;k--)
                    out+=(long long)pow(2.0,(double)k);
                oran=storeb|out;
                andan=storeb&~out;
                cout<<"Case "<<i+1<<": "<<oran<<" "<<andan<<endl;
            }
            bita.clear();
            bitb.clear();
        }
    }
    return 0;
}
