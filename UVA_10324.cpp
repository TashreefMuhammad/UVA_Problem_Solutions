#include <iostream>
#include <cstring>

using namespace std;
int chg[1000000];

int main(void)
{
    int n, i, j, l, test = 0;
    string str;

    while(cin >> str)
    {
        l = str.size();
        /** chg[] -> change array will store the index of which a change of
                     character is detected. More like a parent array which
                     stores the parent, which here is the index of change
        **/
        chg[0] = 0;

        for(i = 1; i < l; i++)
        {
            if(str[i] != str[i-1])
                chg[i] = i;
            else
                chg[i] = chg[i-1];
        }

        cin >> n;
        cout << "Case " << ++test << ":\n";
        while(n--)
        {
            cin >> i >> j;

            if(chg[i] == chg[j])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
