#include <iostream>
#include <cstring>
#include <list>

using namespace std;

int main(void)
{
    int i, l;
    string input;

    while(cin >> input)
    {
        list <char> lst;
        list <char>:: iterator it;
        it = lst.begin();
        l = input.size();

        for(i = 0; i < l; i++)
        {
            if(input[i] == '[')
                it = lst.begin();
            else if(input[i] == ']')
                it = lst.end();
            else
                lst.insert(it, input[i]);
        }

        for(it = lst.begin(); it != lst.end(); ++it)
            cout << *it;
        cout << "\n";
    }

    return 0;
}
