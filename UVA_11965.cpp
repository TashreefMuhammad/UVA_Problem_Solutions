#include <stdio.h>
#include <string.h>
int main(void)
{
    int t,i,n,j,k,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        getchar();
        char line[n][600];
        if(i!=0)
                printf("\n");
            printf("Case %d:\n",i+1);
        for(j=0;j<n;j++)
        {
            gets(line[j]);
            l=strlen(line[j]);
            for(k=0;k<l;k++)
            {
                if(line[j][k]==' ')
                {
                    printf(" ");
                    while(line[j][++k]==' '&&k<l);
                        k--;
                }
                else
                    printf("%c",line[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
