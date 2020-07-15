#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>

using namespace std;

int main(void)
{
    int t, cnt;
    string s;

    cin >> t;
    cin.ignore();

    /// Remove the blank line after test case number
    getline(cin, s);

    while(t--)
    {
        map <string, int> tree;
        map <string, int>::iterator it;
        cnt = 0;

        while(getline(cin, s))
        {
            if(s == "")
                break;
            tree[s]++;
            cnt++;
        }

        for(it = tree.begin(); it != tree.end(); ++it)
            cout << fixed << setprecision(4) << it->first << " " << (double)(it->second * 100) / (double)cnt << "\n";

        if(t)
            cout << "\n";
    }

    return 0;
}
