/// Almost similar to UVA-647 & UVA -357

#include <stdio.h>
#include <math.h>

int main(void)
{
    long long i, j, input[30001] = {0}, coins[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
    double n;

    input[0] = 1;
    for(i = 0; i <= 10; i++)
        for(j = coins[i]; j <= 30000; j++)
            input[j] += input[j-coins[i]];

    while(1)
    {
        scanf("%lf",&n);
        if(n == 0.0)
            break;
        printf("%6.2f%17lld\n", n, input[(long long)round(n*100)]);
    }
    return 0;
}
