#include <stdio.h>

int main(void)
{
    unsigned long long a, b;

    while(scanf("%llu %llu", &a, &b) != EOF)
        printf("%llu\n",a > b? a-b:b-a);

    return 0;
}
