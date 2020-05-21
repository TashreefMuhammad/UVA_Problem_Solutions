#include <iostream>
#include <cstring>
#include <queue>

#define pr pair<int, int>

using namespace std;

int main(void)
{
    int i, j, k, x, y, pos[2][2], cost[8][8];
    string s[2];
    bool visited[8][8];
    queue <pr> q;
    pr u;

    int ind_x[] = {-2, -2, -1, -1,  1,  1,  2,  2};
    int ind_y[] = {-1,  1, -2,  2, -2,  2, -1,  1};

    while(cin >> s[0] >> s[1])
    {
        pos[0][0] = s[0][0] - 'a';
        pos[0][1] = s[0][1] - '1';
        pos[1][0] = s[1][0] - 'a';
        pos[1][1] = s[1][1] - '1';

        for(i = 0; i < 8; i++)
            for(j = 0; j < 8; j++)
                visited[i][j] = false;

        cout << "To get from " << s[0] << " to " << s[1] << " takes ";

        q.push(make_pair(pos[0][0], pos[0][1]));
        cost[pos[0][0]][pos[0][1]] = 0;
        while(!q.empty())
        {
            u = q.front();
            q.pop();

            i = u.first;
            j = u.second;
            visited[i][j] = true;
            if(i == pos[1][0] && j == pos[1][1])
                break;

            for(k = 0; k < 8; k++)
            {
                x = i + ind_x[k];
                y = j + ind_y[k];

                if(x >= 0 && y >=0 && x <= 7 && y <= 7 && !visited[x][y])
                {
                    q.push(make_pair(x, y));
                    cost[x][y] = cost[i][j] + 1;
                }
            }
        }
        cout << cost[i][j] << " knight moves.\n";

        while(!q.empty())
            q.pop();
    }
    return 0;
}
