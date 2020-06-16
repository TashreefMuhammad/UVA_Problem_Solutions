#include <stdio.h>

int main(void)
{
    int t, ts = 0;
    double c, d;

    scanf("%d", &t);

    while(++ts <= t)
    {
        scanf("%lf %lf", &c, &d);
        printf("Case %d: %.2lf\n",ts, ((5*d)/9) + c);
    }

    return 0;
}
