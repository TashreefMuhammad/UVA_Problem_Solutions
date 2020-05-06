#include <stdio.h>

int main(void)
{
    long long n, i, j, input[30001] = {0}, coins[] = {1, 5, 10, 25, 50};

    input[0] = 1;
    for(i = 0; i < 5; i++)
        for(j = coins[i]; j <= 30000; j++)
            input[j]+=input[j-coins[i]];

    while(scanf("%lld",&n) != EOF)
    {
        if(input[n] == 1)
            printf("There is only 1 way to produce %lld cents change.\n", n);
        else
            printf("There are %lld ways to produce %lld cents change.\n", input[n], n);
    }

    return 0;
}
