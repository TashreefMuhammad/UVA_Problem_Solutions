#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(void)
{
    int i, l;
    string str, out;
    map <char, char> mp;

    mp['A'] = '0';
    mp['B'] = '1';
    mp['C'] = '2';
    mp['D'] = '3';
    mp['E'] = '0';
    mp['F'] = '1';
    mp['G'] = '2';
    mp['H'] = '0';
    mp['I'] = '0';
    mp['J'] = '2';
    mp['K'] = '2';
    mp['L'] = '4';
    mp['M'] = '5';
    mp['N'] = '5';
    mp['O'] = '0';
    mp['P'] = '1';
    mp['Q'] = '2';
    mp['R'] = '6';
    mp['S'] = '2';
    mp['T'] = '3';
    mp['U'] = '0';
    mp['V'] = '1';
    mp['W'] = '0';
    mp['X'] = '2';
    mp['Y'] = '0';
    mp['Z'] = '2';

    while(cin >> str)
    {
        l = str.size();

        out = "";
        if(mp[str[0]] != '0')
            out += mp[str[0]];

        for(i = 1; i < l; i++)
            if(mp[str[i]] != mp[str[i-1]] && mp[str[i]] != '0')
                out += mp[str[i]];
        cout << out << "\n";
    }

    return 0;
}
