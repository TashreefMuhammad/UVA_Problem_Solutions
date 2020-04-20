#include <stdio.h>
#include <math.h>

int main(void) {
    double a,b,c,roses,violets,sunflowers,r,R,s;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=-1)
    {
        s=(a+b+c)/2.0 ;
        violets=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(violets*2)/(a+b+c);
        roses=r*r*acos(-1);
        R=(a*b*c)/(4.0*violets);
        sunflowers=R*R*acos(-1)-violets;
        violets-= roses;
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,roses);
    }
    return 0;
}
