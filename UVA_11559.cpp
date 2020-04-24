#include <stdio.h>

int main(void)
{
    int n, b, h, w, p, a, i, j, min_b;

    while(scanf("%d %d %d %d",&n,&b,&h,&w) != EOF)
    {
        min_b = b+1;

        for(i = 0; i < h; i++)
        {
            scanf("%d",&p);
            for(j = 0; j < w; j++)
            {
                scanf("%d",&a);
                if(a >= n && n*p <= b && n*p < min_b)
                    min_b = n*p;
            }
        }
        if(min_b == b+1)
            printf("stay home\n");
        else
            printf("%d\n", min_b);
    }

    return 0;
}
