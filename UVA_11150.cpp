#include <stdio.h>

int main(void)
{
    int n, bottle, extra;

    while(scanf("%d",&n) != EOF)
    {
        bottle = n;
        while(n >= 3)
        {
            bottle+=(n/3);
            extra = n%3;
            n = (n/3) + extra;
        }

        if(n == 2)
            bottle++;
        printf("%d\n",bottle);
    }

    return 0;
}
