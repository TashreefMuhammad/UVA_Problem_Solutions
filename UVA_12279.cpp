#include <stdio.h>

int main(void)
{
    int n,i,reason,treat,in;
    for(i=0;;i++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        treat=reason=0;
        while(n--)
        {
            scanf("%d",&in);
            if(in==0)
                treat++;
            else
                reason++;
        }
        printf("Case %d: %d\n",i+1,reason-treat);
    }

    return 0;
}
