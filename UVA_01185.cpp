#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,i,in;
    double num;
    scanf("%d",&n);
    while(n--)
    {
        num=0.0;
        scanf("%d",&in);
        for(i=1;i<=in;i++)
            num=num+(log((double)i));
        printf("%.0lf\n",floor((num/log(10)))+1);
    }

    return 0;
}
