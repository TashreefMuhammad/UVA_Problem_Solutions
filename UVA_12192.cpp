#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n,m,q,i,j,val,l,u,l_bound;
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
            break;
        vector <int> mat[n];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
        {
            scanf("%d",&val);
            mat[i].push_back(val);
        }
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d %d",&l,&u);
            val=0;
            for(i=0;i<n;i++)
            {
                l_bound=lower_bound(mat[i].begin(),mat[i].end(),l)-mat[i].begin();
                for(j=val;j<n;j++)
                {
                    if(i+j>=n || l_bound+j>=m || mat[i+j][l_bound+j]>u)
                        break;
                    if(j+1>val)
                        val=j+1;
                }
            }
            printf("%d\n",val);
        }
        printf("-\n");
    }

    return 0;
}
