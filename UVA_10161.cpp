#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, sq, digon, x, y;

    while(1)
    {
        scanf("%d", &n);

        if(n == 0)
            break;

        sq = (int)ceil(sqrt((double)n));
        digon = sq * (sq-1) + 1;
        x = y = sq;

        if(sq&1)
        {
            if(n > digon)
                x -= (n - digon);
            else
                y -= (digon - n);
        }
        else
        {
            if(n > digon)
                y -= (n - digon);
            else
                x -= (digon - n);
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}
