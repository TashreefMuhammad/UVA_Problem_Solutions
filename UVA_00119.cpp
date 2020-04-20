#include <stdio.h>
#include <string.h>

typedef struct mystruct mystruct;

struct mystruct
{
    char name[15];
    int sent,receive;
};

int main(void)
{
    int n,i,j,k,l,money,cou;
    char name[15];
    cou=0;
    while(scanf("%d",&n)!=-1)
    {
        getchar();
        mystruct chnames[n];
        for(i=0;i<n;i++)
        {
            scanf("%s",&chnames[i].name);
            chnames[i].receive=0;
        }
        getchar();
        for(i=0;i<n;i++)
        {
            scanf("%s",&name);
            scanf("%d",&money);
            scanf("%d",&k);
            j=0;
            while(strcmp(name,chnames[j].name)!=0)
                j++;
            if(k!=0)
                chnames[j].sent=(money/k)*k;
            else
                chnames[j].sent=0;
            for(j=0;j<k;j++)
            {
                scanf("%s",&name);
                l=0;
                while(strcmp(name,chnames[l].name)!=0)
                    l++;
                chnames[l].receive+=money/k;
            }
            getchar();
        }
        if(cou!=0)
            printf("\n");
        cou++;
        for(i=0;i<n;i++)
            printf("%s %d\n",chnames[i].name,chnames[i].receive-chnames[i].sent);
    }
}
