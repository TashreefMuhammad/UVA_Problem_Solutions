#include <stdio.h>

int main(void)
{
    unsigned long long b,s,i=0;
    while(1)
    {
        scanf("%llu%llu",&b,&s);
        if(b==0 && s==0)
            break;
        if(b==0||s==0||b==1)
        {
            printf("Case %llu: :-\\",++i);
            printf("\n");
        }
        else if(s>=b)
            printf("Case %llu: :-|\n",++i);
        else
            printf("Case %llu: :-(\n",++i);
    }

    return 0;
}
