#include <stdio.h>

bool leapyear[3001];
void checkleapyear();

int main(void)
{
    int t,i,j,d,m,y,qy,out;
    checkleapyear();
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&d,&m,&y,&qy);
        if(m==2&&d==29)
        {
            out=0;
            for(j=y+4;j<=qy;j+=4)
                if(leapyear[j]==true)
                    out++;
        }
        else
            out=qy-y;
        printf("Case %d: %d\n",i+1,out);
    }
    return 0;
}
void checkleapyear()
{
    int i;
    for(i=1852;i<=3000;i+=4)
    {
        if(i%400==0)
            leapyear[i]=true;
        else if(i%100==0)
            leapyear[i]=false;
        else if(i%4==0)
            leapyear[i]=true;
    }
}
