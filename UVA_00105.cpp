#include <stdio.h>

int main(void)
{
    int l, h, r, i, max_ind = -1, seq[10002];

    for(i = 0; i <= 10001; i++)
        seq[i] = 0;

    while(scanf("%d %d %d", &l, &h, &r) != EOF)
    {
        for(i = l; i < r; i++)
            if(seq[i] < h)
                seq[i] = h;
        if(r > max_ind)
            max_ind = r;
    }

    printf("1 %d", seq[1]);

    for(i = 2; i <= max_ind; i++)
        if(seq[i-1] != seq[i])
            printf(" %d %d", i, seq[i]);
    printf("\n");

    return 0;
}
