#include <stdio.h>

int main(void)
{
    int n, i, j, cnt_row, cnt_col;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        int mat[n][n], row[n] = {0}, col[n] = {0};

        cnt_row = cnt_col = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &mat[i][j]);

        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
            {
                row[i]+=mat[i][j];
                col[j]+=mat[i][j];
            }
        for(i = 0; i < n; i++)
        {
            if(row[i]&1)
                cnt_row++;
            if(col[i]&1)
                cnt_col++;
        }

        if(cnt_row == 0 && cnt_col == 0)
            printf("OK\n");
        else if(cnt_row == 1 && cnt_col == 1)
        {
            i = j = 0;
            while(!(row[i]&1))
                i++;
            while(!(col[j]&1))
                j++;
            printf("Change bit (%d,%d)\n",i+1,j+1);
        }
        else
            printf("Corrupt\n");
    }

    return 0;
}
