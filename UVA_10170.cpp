#include<stdio.h>

int main(void)
{
    unsigned long long s,d,i,n;
    while(scanf("%llu%llu",&s,&d)!=-1)
    {
        for(n=i=s;n<d;i++,n+=i);
            printf("%llu\n",i);
    }
    return 0;
}
