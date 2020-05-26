#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

int main(void)
{
    int n, i, j, cnt, loc;
    string input, mid;

    while(getline(cin, input))
    {
        cnt = 0;
        cout << input << "\n";

        vector <int> stored, sorted;
        map <int, int> pos;
        stringstream proc(input);

        while(getline(proc, mid, ' '))
        {
            stringstream num(mid);

            num >> n;
            stored.push_back(n);
            sorted.push_back(n);
            pos[n] = cnt++;
        }

        sort(sorted.begin(), sorted.end());

        for(i = cnt-1; i > 0; i--)
            if(sorted[i] != stored[i])
            {
                if(pos[sorted[i]] != 0)
                {
                    cout << cnt - pos[sorted[i]] << " ";
                    loc = pos[sorted[i]];
                    for(j = 0; 2*j < loc; j++)
                    {
                        swap(stored[j], stored[loc-j]);
                        pos[stored[j]] = j;
                        pos[stored[loc-j]] = loc-j;
                    }
                }
                cout << cnt - i << " ";
                for(j = 0; 2*j < i; j++)
                {
                    swap(stored[j], stored[i-j]);
                    pos[stored[j]] = j;
                    pos[stored[i-j]] = i-j;
                }
            }
        cout << "0\n";
    }

    return 0;
}
