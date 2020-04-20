#include <stdio.h>
#include <string.h>

int main(void)
{
    int t,i,l,j;
    char c[90];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        while(gets(c))
        {
            l=strlen(c);
            if(l==0)
                break;
            for(j=0;j<l;j++)
            {
                if(c[j]=='0')
                    c[j]='O';
                else if(c[j]=='1')
                    c[j]='I';
                else if(c[j]=='2')
                    c[j]='Z';
                else if(c[j]=='3')
                    c[j]='E';
                else if(c[j]=='4')
                    c[j]='A';
                else if(c[j]=='5')
                    c[j]='S';
                else if(c[j]=='6')
                    c[j]='G';
                else if(c[j]=='7')
                    c[j]='T';
                else if(c[j]=='8')
                    c[j]='B';
                else if(c[j]=='9')
                    c[j]='P';
                printf("%c",c[j]);
            }
            printf("\n");
        }
        if(i!=t-1)
            printf("\n");
    }
    return 0;
}
