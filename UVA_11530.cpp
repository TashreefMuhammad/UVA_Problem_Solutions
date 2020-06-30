#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int t, l, i, j, out, ts = 0;

    /// Ignore the spellings -_-
    char twos[] = {'b', 'e', 'h', 'k', 'n', 'q', 'u', 'x'};
    char thrs[] = {'c', 'f', 'i', 'l', 'o', 'r', 'v', 'y'};
    char fors[] = {'s', 'z'};
    string str;

    cin >> t;
    cin.ignore();

    while(t--)
    {
        getline(cin, str);
        out = 0;
        l = str.size();

        for(i = 0; i < l; ++i)
        {
            for(j = 0; j < 2; j++)
                if(str[i] == fors[j])
                {
                    out += 4;
                    break;
                }
            if(j != 2)
                continue;

            for(j = 0; j < 8; j++)
                if(str[i] == thrs[j])
                {
                    out += 3;
                    break;
                }
            if(j != 8)
                continue;

            for(j = 0; j < 8; j++)
                if(str[i] == twos[j])
                {
                    out += 2;
                    break;
                }
            if(j != 8)
                continue;

            ++out;
        }

        cout << "Case #" << ++ts << ": "  << out << "\n";
    }

    return 0;
}
