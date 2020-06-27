#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n, i, l, j;
    string str, token;

    cin >> n;

    while(n--)
    {
        cin >> str;

        l = str.size();
        token = "";

        for(i = 0; i < (l>>1); i++)
        {
            token += str[i];
            for(j = i+1; j < l; j += i+1)
                if(str.substr(j, i+1) != token)
                    break;
            if(j == l)
                break;
        }
        if(j == l)
            cout << i+1 << "\n";
        else
            cout << l << "\n";

        if(n)
            cout << "\n";
    }

    return 0;
}
