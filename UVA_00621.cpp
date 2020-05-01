#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int t, l;
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        l = s.size();

        if(l == 1 || l == 2)
            cout << "+\n";
        else if(l >= 3)
        {
            if(s[l-2] == '3' && s[l-1] == '5')
                cout << "-\n";
            else if(s[0] == '9' && s[l-1] == '4')
                cout << "*\n";
            else if(l >= 4 && s[0] == '1' && s[1] == '9' && s[2] == '0')
                cout << "?\n";
            else
                cout << "+\n";
        }
    }

    return 0;
}
