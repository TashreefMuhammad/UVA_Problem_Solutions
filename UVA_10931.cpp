#include <stdio.h>

int main(void)
{
    int i, j, cnt, dig[31];

    while(scanf("%d",&i) != EOF)
    {
        if(i == 0)
            break;
        printf("The parity of ");
        j = cnt = 0;

        while(i)
        {
            dig[j] = i & 1;
            cnt+=dig[j];
            i>>=1;
            j++;
        }

        while(j--)
            printf("%d", dig[j]);
        printf(" is %d (mod 2).\n", cnt);
    }

    return 0;
}
