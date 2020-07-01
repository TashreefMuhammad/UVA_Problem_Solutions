#include <iostream>
#include <cstring>

using namespace std;

int m, n, l;
string in;
char mat[50][50];

int checker(int i, int j, int dx, int dy);

int main(void)
{
    int t, i, j, k;

    cin >> t;

    while(t--)
    {
        cin >> m >> n;

        for(i = 0; i < m; i++)
        {
            cin >> in;
            for(j = 0; j < n; j++)
                mat[i][j] = tolower(in[j]);
        }

        cin >> k;

        while(k--)
        {
            cin >> in;
            l = in.size();
            for(i = 0; i < l; i++)
                in[i] = tolower(in[i]);

            for(i = 0; i < m; i++)
            {
                for(j = 0; j < n; j++)
                    if(in[0] == mat[i][j])
                        if(checker(i, j, -1, -1) || checker(i, j, -1,  0) || checker(i, j, -1,  1) || checker(i, j,  0, -1) ||
                            checker(i, j,  0,  1) || checker(i, j,  1, -1) || checker(i, j,  1,  0) || checker(i, j,  1,  1))
                            break;
                if(j != n)
                {
                    cout << i+1 << " " << j+1 << "\n";
                    break;
                }
            }
        }
        if(t)
            cout << "\n";
    }

    return 0;
}

int checker(int i, int j, int dx, int dy)
{
    int cnt = 0;
    string proc = "";

    while(i >= 0 && i < m && j >= 0 && j < n && mat[i][j] == in[cnt])
    {
        proc += mat[i][j];

        i += dx;
        j += dy;
        cnt++;
    }

    if(cnt == l)
        return 1;
    return 0;
}
