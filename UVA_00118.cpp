#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int m, n, i, j, l, pos_X, pos_Y, proc_X, proc_Y, dir[4][2];

    /// For North [N]
    dir[0][0] =  0;
    dir[0][1] =  1;

    /// For South [S]
    dir[1][0] =  0;
    dir[1][1] = -1;

    /// For East [E]
    dir[2][0] =  1;
    dir[2][1] =  0;

    /// For West [W]
    dir[3][0] = -1;
    dir[3][1] =  0;

    char stat;
    string str;

    cin >> m >> n;
    int mat[n+1][m+1];

    for(i = 0; i <= n; ++i)
        for(j = 0; j <= m; ++j)
            mat[i][j] = 0;

    while(cin >> pos_X >> pos_Y >> stat >> str)
    {
        l = str.size();

        for(i = 0; i < l; i++)
        {
            if(str[i] == 'F')
            {
                switch(stat)
                {
                case 'N':
                    proc_X = pos_X + dir[0][0];
                    proc_Y = pos_Y + dir[0][1];
                    break;
                case 'S':
                    proc_X = pos_X + dir[1][0];
                    proc_Y = pos_Y + dir[1][1];
                    break;
                case 'E':
                    proc_X = pos_X + dir[2][0];
                    proc_Y = pos_Y + dir[2][1];
                    break;
                case 'W':
                    proc_X = pos_X + dir[3][0];
                    proc_Y = pos_Y + dir[3][1];
                    break;
                }
                if(proc_X >= 0 && proc_X <= m && proc_Y >= 0 && proc_Y <= n)
                {
                    pos_X = proc_X;
                    pos_Y = proc_Y;
                }
                else if(mat[pos_X][pos_Y] == 0)
                {
                    mat[pos_X][pos_Y] = 1;
                    break;
                }
            }
            else
            {
                if(stat == 'N')
                {
                    if(str[i] == 'L')
                        stat = 'W';
                    else
                        stat = 'E';
                }
                else if(stat == 'S')
                {
                    if(str[i] == 'L')
                        stat = 'E';
                    else
                        stat = 'W';
                }
                else if(stat == 'E')
                {
                    if(str[i] == 'L')
                        stat = 'N';
                    else
                        stat = 'S';
                }
                else
                {
                    if(str[i] == 'L')
                        stat = 'S';
                    else
                        stat = 'N';
                }
            }
        }
        cout << pos_X << " " << pos_Y << " " << stat;

        if(i != l)
            cout << " LOST";
        cout << "\n";
    }

    return 0;
}
