#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    string s, t;
    map <string, pair<string, bool>> mp;
    map <string, pair<string, bool>>::iterator it;
    vector <string> out;
    int i, l ;

    while(1)
    {
        cin >> s;

        if(s == "#")
            break;
        t = s;
        transform(t.begin(), t.end(), t.begin(), ::toupper);
        sort(t.begin(), t.end());

        if(mp.find(t) == mp.end())
            mp[t] = make_pair(s, true);
        else
            mp[t] = make_pair(min(mp[t].first, s), false);
    }

    for(it = mp.begin(); it != mp.end(); it++)
        if(it->second.second)
            out.push_back(it->second.first);

    sort(out.begin(), out.end());
    l = out.size();

    for(i = 0; i < l; i++)
        cout << out[i] << "\n";

    return 0;
}
