#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(void)
{
    string s;
    int i, l;
    map <char, int> converter;

    converter['A'] = 2;
    converter['B'] = 2;
    converter['C'] = 2;

    converter['D'] = 3;
    converter['E'] = 3;
    converter['F'] = 3;

    converter['G'] = 4;
    converter['H'] = 4;
    converter['I'] = 4;

    converter['J'] = 5;
    converter['K'] = 5;
    converter['L'] = 5;

    converter['M'] = 6;
    converter['N'] = 6;
    converter['O'] = 6;

    converter['P'] = 7;
    converter['Q'] = 7;
    converter['R'] = 7;
    converter['S'] = 7;

    converter['T'] = 8;
    converter['U'] = 8;
    converter['V'] = 8;

    converter['W'] = 9;
    converter['X'] = 9;
    converter['Y'] = 9;
    converter['Z'] = 9;

    while(cin >> s)
    {
        l = s.size();

        i = 0;
        while(i < l)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                cout << converter[s[i]];
            else
                cout << s[i];
            i++;
        }
        cout << "\n";
    }

    return 0;
}
