#include <stdio.h>

int main(void)
{
    int t,n,p,q,sump,sumq,i,j;
    scanf("%d",&t);
    int out[t];
    for(j=0;j<t;j++)
    {
        sump=0;
        sumq=0;
        scanf("%d%d%d",&n,&p,&q);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n && sump<=p && sumq<=q; i++)
        {
            sump++;
            sumq+=a[i];
        }
        if(i==n && sump<=p && sumq<=q)
            out[j]=i;
        else
            out[j]=i-1;
    }
    for(i=0;i<t;i++)
        printf("Case %d: %d\n",i+1,out[i]);
    return 0;
}
