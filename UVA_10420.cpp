#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main(void)
{
    int n;
    string s, name;
    map<string, int> country;
    map<string, int>::iterator it;

    cin >> n;

    while(n--)
    {
        cin >> name;
        getline(cin, s);
        country[name]++;
    }

    for(it = country.begin(); it != country.end(); it++)
            cout << it->first << " " << it->second << "\n";

    return 0;
}
