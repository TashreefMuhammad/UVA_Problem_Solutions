#include <stdio.h>

int values[10001];
void generator();

int main(void)
{
    generator();

    int n;
    while(scanf("%d", &n) != EOF)
        printf("%5d -> %d\n", n, values[n]);

    return 0;
}

void generator()
{
    int i, val = 1;

    for(i = 1; i <= 10000; ++i)
    {
        val *= i;

        while(val % 10 == 0)
            val /= 10;

        val = val%100000;
        values[i] = val%10;
    }
}
