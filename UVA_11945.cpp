#include <stdio.h>

int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        double sum,acc[12];
        sum=0.0;
        for(j=0;j<12;j++)
        {
            scanf("%lf",&acc[j]);
            sum+=acc[j];
        }
        sum=sum/12.0;
        if(sum<1000)
            printf("%d $%.2lf\n",i+1,sum);
        else if(sum<10000)
            printf("%d $%d,%.2lf\n",i+1,(int)sum/1000,sum-((int)sum/1000)*1000);
        else if(sum<100000)
            printf("%d $%d,%.2lf\n",i+1,(int)sum/1000,sum-((int)sum/1000)*1000);
    }
    return 0;
}
