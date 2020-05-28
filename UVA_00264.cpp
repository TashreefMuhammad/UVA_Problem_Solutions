#include <stdio.h>
#define V 100000000

struct cantor
{
    int nominator, denominator;

}term[V];

void generator();

int main(void)
{
    generator();

    int in;

    while(scanf("%d", &in) != EOF)
        printf("TERM %d IS %d/%d\n", in, term[in-1].nominator, term[in-1].denominator);
    return 0;
}

void generator()
{
    int i, j, cnt, val_i, val_j;

    i = j = cnt = 0;

    term[cnt].nominator = 1;
    term[cnt].denominator = 1;
    cnt++;

    while(cnt < V)
    {
        if(i == 0)
        {
            j++;
            term[cnt].nominator = i + 1;
            term[cnt].denominator = j + 1;
            cnt++;

            val_i =  1;
            val_j = -1;
        }
        if(j == 0)
        {
            i++;
            term[cnt].nominator = i + 1;
            term[cnt].denominator = j + 1;
            cnt++;

            val_i = -1;
            val_j =  1;
        }

        i+= val_i;
        j+= val_j;
        term[cnt].nominator = i + 1;
        term[cnt].denominator = j + 1;
        cnt++;
    }
}
