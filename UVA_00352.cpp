#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n, i, j, k, x, y, cnt, ts = 0;
    int dx[] = { -1, -1, -1,  0,  0,  1,  1,  1};
    int dy[] = { -1,  0,  1, -1,  1, -1,  0,  1};
    pair <int, int> u;

    while(cin >> n)
    {
        char mat[n][n];

        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                cin >> mat[i][j];

        queue <pair<int, int>> q;

        cnt = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                if(mat[i][j] == '1')
                {
                    q.push(make_pair(i, j));
                    cnt++;
                    while(!q.empty())
                    {
                        u = q.front();
                        q.pop();
                        mat[u.first][u.second] = '0';

                        for(k = 0; k < 8; k++)
                        {
                            x = u.first + dx[k];
                            y = u.second + dy[k];

                            if(x >= 0 && x < n && y >= 0 && y < n && mat[x][y] == '1')
                                q.push(make_pair(x, y));
                        }
                    }
                }
        cout << "Image number " << ++ts << " contains " << cnt << " war eagles.\n";
    }
    return 0;
}
