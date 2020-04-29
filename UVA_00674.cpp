#include <stdio.h>

int main(void)
{
    int n, i, j, input[7490] = {0}, coins[] = {1, 5, 10, 25, 50};

    input[0] = 1;
    for(i = 0; i < 5; i++)
        for(j = coins[i]; j < 7490; j++)
            input[j]+=input[j-coins[i]];

    while(scanf("%d",&n) != EOF)
    {
        printf("%d\n", input[n]);
    }

    return 0;
}
