#include <stdio.h>
int main(void)
{
    int t,g,l,stg,stl,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&g,&l);
        n=l;
        if(l%g==0)
            printf("%d %d\n",g,l);
        else
            printf("-1\n");
    }

    return 0;
}
