#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    string s;

    while(1)
    {
        cin >> s;
        if(s == "#")
            break;
        if(next_permutation(s.begin(), s.end()))
            cout << s << "\n";
        else
            cout << "No Successor\n";
    }

    return 0;
}
