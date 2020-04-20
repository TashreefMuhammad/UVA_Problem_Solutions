#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t,i,j,f1,f2;
    scanf("%d",&t);
    int ans[t];
    for(i=0;i<t;i++)
    {
        int a[10],as[10],ds[10];
        f1=f2=0;
        for(j=0;j<10;j++)
        {
            scanf("%d",&a[j]);
            as[j]=ds[j]=a[j];
        }
        sort(as,as+10);
        sort(ds,ds+10,greater<int>());
        for(j=0;j<10;j++)
        {
            if(f1==0 && as[j]!=a[j])
                f1=1;
            if(f2==0 && ds[j]!=a[j])
                f2=1;
        }
        if(f1==0||f2==0)
            ans[i]=0;
        else
            ans[i]=1;
    }
    printf("Lumberjacks:\n");
    for(i=0;i<t;i++)
    {
        if(ans[i]==0)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
