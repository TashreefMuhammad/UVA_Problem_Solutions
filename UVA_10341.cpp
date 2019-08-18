#include <stdio.h>
#include <math.h>

int main(void)
{
    double p,q,r,s,t,u,x,lo,hi,mid,equ,equ1,equ2;
    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        equ1=p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t+u;
        equ2=p+r*cos(0)+u;
        if(equ1==0)
            printf("1.0000\n");
        else if(equ2==0)
            printf("0.0000\n");
        else if(equ1*equ2>0)
            printf("No solution\n");
        else
        {
            lo=0.0;
            hi=1.0;
            while(hi-lo>0.00000000001)
            {
                mid=(lo+hi)/2.0;
                equ=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*mid*mid+u;
                equ1=p*exp(-lo)+q*sin(lo)+r*cos(lo)+s*tan(lo)+t*lo*lo+u;
                equ2=p*exp(-hi)+q*sin(hi)+r*cos(hi)+s*tan(hi)+t*hi*hi+u;
                if(equ==0)
                    break;
                else if(equ*equ1<0)
                    hi=mid;
                else
                    lo=mid;
            }
            printf("%.4lf\n",mid);
        }
    }
    return 0;
}
