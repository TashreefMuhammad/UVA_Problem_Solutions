#include <stdio.h>
#include <algorithm>

using namespace std;

int find_price(int a);

int main(void)
{
    int a,b,lo,hi,mid,bill,dif;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        bill=min(100,max(0,a/2));
        a=a-2*100;
        bill+=min(9900,max(0,a/3));
        a=a-3*9900;
        bill+=min(990000,max(0,a/5));
        a=a-5*990000;
        bill+=max(0,a/7);
        lo=0;
        hi=bill;
        while(lo<hi)
        {
            mid=(lo+hi)>>1;
            dif=find_price(bill-mid)-find_price(mid);
            if(dif>b)
                lo=mid;
            else if(dif<b)
                hi=mid;
            else
                lo=hi=mid;
        }
        printf("%d\n",find_price(mid));
    }

    return 0;
}

int find_price(int a)
{
    int price=min(2*100,max(0,a*2));
    a-=100;
    price+=min(3*9900,max(0,a*3));
    a-=9900;
    price+=min(5*990000,max(0,a*5));
    a-=990000;
    price+=max(0,a*7);
    return price;
}
