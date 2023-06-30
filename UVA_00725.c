#include <stdio.h>

int main(void)
{
    int n, i, denom, nom, tNom, tDenom, cnt = -1;

    while(1)
    {
        scanf("%d", &n);

        if(n == 0)
            break;

        if(cnt != -1)
            printf("\n");

        cnt = 0;
        for(denom = 1234; denom < 50000; ++denom)
        {
            nom = denom * n;
            if(nom > 98765)
                break;
            tNom = nom;
            tDenom = denom;

            int record[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            for(i = 0; i < 5; ++i)
            {
                if(record[tDenom%10] == 1)
                    break;
                record[tDenom%10] = 1;
                if(record[tNom%10] == 1)
                    break;
                record[tNom%10] = 1;
                tDenom /= 10;
                tNom /= 10;
            }
            if(i != 5)
                continue;

            for(i = 0; i < 10; ++i)
                if(record[i] == 0)
                    break;
            if(i == 10)
            {
                printf("%05d / %05d = %d\n", nom, denom, n);
                ++cnt;
            }
        }
        if(cnt == 0)
            printf("There are no solutions for %d.\n", n);
    }

    return 0;
}
