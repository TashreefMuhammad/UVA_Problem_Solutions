#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n, m, i, j, i1, j1, cnt;
    queue <pair<int, int>> q;


    while(1)
    {
        cin >> m >> n;
        if(m == 0)
            break;

        string s[m];
        cnt = 0;

        for(i = 0; i < m; i++)
            cin >> s[i];

        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                if(s[i][j] == '@')
                {
                    cnt++;
                    q.push(make_pair(i, j));

                    while(!q.empty())
                    {
                        i1 = q.front().first;
                        j1 = q.front().second;
                        q.pop();
                        s[i1][j1] = '*';

                        if(i1 > 0 && j1 > 0 && s[i1-1][j1-1] == '@')
                            q.push(make_pair(i1-1, j1-1));
                        if(i1 > 0 && j1 < n-1 && s[i1-1][j1+1] == '@')
                            q.push(make_pair(i1-1, j1+1));
                        if(i1 < m-1 && j1 > 0 && s[i1+1][j1-1] == '@')
                            q.push(make_pair(i1+1, j1-1));
                        if(i1 < m-1 && j1 < n-1 && s[i1+1][j1+1] == '@')
                            q.push(make_pair(i1+1, j1+1));
                        if(i1 > 0 && s[i1-1][j1] == '@')
                            q.push(make_pair(i1-1, j1));
                        if(j1 > 0 && s[i1][j1-1] == '@')
                            q.push(make_pair(i1, j1-1));
                        if(i1 < m-1 && s[i1+1][j1] == '@')
                            q.push(make_pair(i1+1, j1));
                        if(j1 < n-1 && s[i1][j1+1] == '@')
                            q.push(make_pair(i1, j1+1));
                    }
                }
        cout << cnt << "\n";

    }

    return 0;
}
