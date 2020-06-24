#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l, i;
    string str;

    cin >> n;

    while(n--)
    {
        cin >> str;
        map <char, int> mp;

        l = str.size();

        for(i = 0; i < l; i++)
            mp[str[i]]++;

        cout << min(mp['M'], min(mp['A']/3, min(mp['R']>>1, min(mp['G'], min(mp['I'], mp['T']))))) << "\n";
    }
    return 0;
}
