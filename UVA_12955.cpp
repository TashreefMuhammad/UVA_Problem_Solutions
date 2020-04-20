#include <stdio.h>

int main(void)
{
    int n,i,out,c,ex;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        ex=n;
        while(1)
        {
            i=out=1;
            while(out*i<=ex)
            {
                out*=i;
                i++;
            }
            c++;
            ex=ex-out;
            if(ex==0)
                break;
        }
        printf("%d\n",c);
    }
    return 0;
}
