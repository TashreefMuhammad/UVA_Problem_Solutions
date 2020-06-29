#include <stdio.h>

int main(void)
{
    int j, i, f, point;
    char c;
    double point_x, point_y, x_ul[10], y_ul[10], x_lr[10], y_lr[10];

    i = point = 0;
    while(1)
    {
        c = getchar();
        if(c == '*')
            break;
        scanf("%lf %lf %lf %lf", &x_ul[i], &y_ul[i], &x_lr[i], &y_lr[i]);
        getchar();
        i++;
    }

    while(1)
    {
        scanf("%lf %lf", &point_x, &point_y);
        if(point_x ==  9999.9 && point_y ==  9999.9)
            break;

        ++point;
        f = 1;
        for(j = 0; j < i; j++)
            if(point_x > x_ul[j] && point_x < x_lr[j] && point_y < y_ul[j] && point_y > y_lr[j])
            {
                printf("Point %d is contained in figure %d\n", point, j+1);
                f = 0;
            }
        if(f)
            printf("Point %d is not contained in any figure\n", point);
    }

    return 0;
}
