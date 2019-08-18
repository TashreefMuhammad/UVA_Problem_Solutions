#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long t;
    scanf("%llu",&t);
    double n;
    while(t--)
    {
        scanf("%lf",&n);
        n=floor((-1+sqrt(8*n+1))/2);
        printf("%.0lf\n",n);
    }

    return 0;
}
