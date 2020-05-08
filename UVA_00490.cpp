#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int i, j, maximum = 0, cnt = 0;
    string s;
    vector <string> sen;
    vector <int> len;

    while(getline(cin, s))
    {
        cnt++;
        s.erase(remove(s.begin(), s.end(), '\t'), s.end());
        sen.push_back(s);
        j = s.size();
        maximum = max(maximum, j);
        len.push_back(j);
    }

    for(i = 0; i < maximum; i++)
    {
        for(j = cnt-1; j >= 0; j--)
        {
            if(len[j] > i)
                cout << sen[j][i];
            else
                cout << " ";
        }
        printf("\n");
    }
    return 0;
}
