#include <iostream>
#include <cstring>
#include <map>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, k, v, m, l, i, cnt;
    double out;
    char ch;
    string s;

    cin >> n;

    while(n--)
    {
        map <char, int> val;
        cin >> k;

        while(k--)
        {
            cin >> ch >> v;
            val[ch] = v;
        }

        cin >> m;
        /// In order to use getline() it is important: https://stackoverflow.com/questions/23136487/c-getline-after-cin
        cin.ignore();
        cnt = 0;

        while(m--)
        {
            getline(cin, s);
            l = s.size();

            for(i = 0; i < l; i++)
                cnt += val[s[i]];
        }
        out = (double)cnt;
        cout << fixed << setprecision(2) << out/100.0 << "$\n";
    }

    return 0;
}
