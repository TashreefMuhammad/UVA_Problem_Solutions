#include <stdio.h>

int main(void)
{
    int i,n,wh1,wm1,wh2,wm2,mh1,mm1,mh2,mm2,startwife,endwife,startmeeting,endmeeting,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d:%d %d:%d",&wh1,&wm1,&wh2,&wm2);
        scanf("%d:%d %d:%d",&mh1,&mm1,&mh2,&mm2);
        startwife=wh1*100+wm1;
        endwife=wh2*100+wm2;
        if(startwife>endwife)
        {
            temp=startwife;
            startwife=endwife;
            endwife=temp;
        }
        startmeeting=mh1*100+mm1;
        endmeeting=mh2*100+mm2;
        if(startmeeting>endmeeting)
        {
            temp=startmeeting;
            startwife=endmeeting;
            endmeeting=temp;
        }
        if(startmeeting>=startwife&&startmeeting<=endwife)
            printf("Case %d: Mrs Meeting\n",i+1);
        else if(endmeeting>=startwife&&endmeeting<=endwife)
            printf("Case %d: Mrs Meeting\n",i+1);
        else if(startwife>=startmeeting&&endmeeting>=endwife)
            printf("Case %d: Mrs Meeting\n",i+1);
        else
            printf("Case %d: Hits Meeting\n",i+1);
    }

    return 0;
}
