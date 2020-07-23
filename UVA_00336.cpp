#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
    int nc, i, j, u, v, nodes, node, TTL, cnt, l, ts = 0;

    while(1)
    {
        cin >> nc;

        if(nc == 0)
            break;
        map <int, int> mp;
        pair <int, int> p[nc];

        j = 0;
        for(i = 0; i < nc; i++)
        {
            cin >> u >> v;

            p[i] = make_pair(u, v);
            if(mp.find(u) == mp.end())
                mp[u] = j++;
            if(mp.find(v) == mp.end())
                mp[v] = j++;
        }

        nodes = j;
        int vis[nodes];
        vector <int> grp[nodes];
        for(i = 0; i < nc; i++)
        {
            grp[mp[p[i].first]].push_back(mp[p[i].second]);
            grp[mp[p[i].second]].push_back(mp[p[i].first]);
        }

        while(1)
        {
            cin >> j >> TTL;
            if(j == 0 && TTL == 0)
                break;
            if(mp.find(j) == mp.end())
                cnt = 0;
            else
            {
                queue <int> q;
                node = mp[j];
                q.push(node);
                cnt = 1;
                for(i = 0; i < nodes; ++i)
                    vis[i] = -1;
                vis[node] = 0;

                while(!q.empty())
                {
                    u = q.front();
                    q.pop();
                    if(vis[u] == TTL)
                        break;
                    l = grp[u].size();
                    for(i = 0; i < l; i++)
                        if(vis[grp[u][i]] == -1)
                        {
                            vis[grp[u][i]] = vis[u] + 1;
                            q.push(grp[u][i]);
                            cnt++;
                        }
                }
            }
            cout << "Case " << ++ts << ": " << nodes - cnt << " nodes not reachable from node " << j << " with TTL = " << TTL << ".\n";
        }
    }

    return 0;
}
