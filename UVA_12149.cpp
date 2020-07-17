/// There are two accepted solutions for this Problem for me
/// Both of which are almost similar

/******************Solution 1******************/
#include <stdio.h>

long long out[101];
void generator();

int main(void)
{
    generator();
    int n;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        printf("%lld\n", out[n]);
    }

    return 0;
}

void generator()
{
    int i;

    for(i = 1; i <= 100; i++)
        out[i] = out[i-1] + i*i;
}

/******************Solution 2******************/
/*
#include <stdio.h>

long long out[101];
long long generator(int n);

int main(void)
{
    int n;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        printf("%lld\n", generator(n));
    }

    return 0;
}

long long generator(int n)
{
    if(n == 1)
        return 1;
    else if(out[n] != 0)
        return out[n];
    else
        return out[n] = n*n + generator(n-1);
}
*/
