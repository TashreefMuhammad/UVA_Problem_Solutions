#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    int g, l, i;
    string str, s_str;

    while(1)
    {
        cin >> g;

        if(g == 0)
            break;

        cin >> str;
        l = str.size();
        g = l/g;

        for(i = 0; i < l; i += g)
        {
            s_str = str.substr(i, g);
            reverse(s_str.begin(), s_str.end());
            cout << s_str;
        }
        cout << "\n";
    }

    return 0;
}
