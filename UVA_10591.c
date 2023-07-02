#include <stdio.h>

int main(void)
{
    int i, j, tmp, t, ts = 0;

    scanf("%d", & t);

    while(ts++ < t)
    {
        scanf("%d", &i);
        j = i;

        while(j != 1 && j != 89)
        {
            tmp = j;
            j = 0;
            while(tmp)
            {
                j += ((tmp%10) * (tmp%10));
                tmp /= 10;
            }
        }

        printf("Case #%d: %d ", ts, i);

        if(j == 1)
            printf("is a Happy number.\n");
        else
            printf("is an Unhappy number.\n");
    }

    return 0;
}
