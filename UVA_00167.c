#include <stdio.h>

int col[8], pDiag[16], sDiag[16], mat[8][8];
int sum, score;

void nQueen(int n);

int main(void)
{
    int k, i, j;
    scanf("%d", &k);

    while(k--)
    {
        for(i = 0; i < 8; ++i)
            for(j = 0; j < 8; ++j)
                scanf("%d", &mat[i][j]);

        score = sum = 0;
        nQueen(0);

        printf("%5d\n", score);
    }

    return 0;
}

void nQueen(int n)
{
    if(n == 8)
    {
        score = score > sum ? score : sum;
        return ;
    }

    int i;
    for(i = 0; i < 8; ++i)
        if(!col[i] && !pDiag[n - i + 7] && !sDiag[n + i])
        {
            col[i] = 1;
            pDiag[n - i + 7] = 1;
            sDiag[n + i] = 1;
            sum += mat[n][i];

            nQueen(n + 1);

            col[i] = 0;
            pDiag[n - i + 7] = 0;
            sDiag[n + i] = 0;
            sum -= mat[n][i];
        }
}
