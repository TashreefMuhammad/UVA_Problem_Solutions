#include <stdio.h>

bool possible(int val,int ar[],int n);

int main(void)
{
    int t,n,lo,hi,mid,i,j,out;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        n++;
        int a[n];
        for(j=1;j<n;j++)
            scanf("%d",&a[j]);
        lo=a[0]=0;
        hi=a[n-1];
        while(lo<=hi)
        {
            mid=(lo+hi)>>1;
            if(possible(mid,a,n))
            {
                out=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        printf("Case %d: %d\n",i+1,out);
    }
    return 0;
}

bool possible(int val,int ar[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(ar[i]-ar[i-1]==val)
            val--;
        else if(ar[i]-ar[i-1]>val)
            break;
    }
    if(i==n)
        return true;
    else
        return false;
}
