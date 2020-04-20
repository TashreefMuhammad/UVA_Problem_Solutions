#include <stdio.h>
#include <math.h>

int main(void)
{
    double l,w,h,t,out;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&t)!=EOF)
    {
        if((l*tan(t*acos(-1.0)/180))<=h)
            out = l*w*h-0.5*l*l*tan(t*acos(-1.0)/180)*w;
        else
            out = .5*h*(h/tan(t*acos(-1.0)/180))*w;
        printf("%.3lf mL\n",out);
    }
    return 0;
}
