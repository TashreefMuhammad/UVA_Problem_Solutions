#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main(void)
{
    int i, l;
    string input, s;
    set <string> output;
    set <string>::iterator it;

    output.insert("");

    while(getline(cin, input))
    {
        l = input.size();

        i = 0;

        while(tolower(input[i]) < 'a' || tolower(input[i]) > 'z')
            i++;
        s="";
        while(i < l)
        {
            while(tolower(input[i]) >= 'a' && tolower(input[i]) <= 'z' && i < l)
                s+=tolower(input[i++]);
             output.insert(s);
             s="";
             i++;
        }
    }

    it = output.begin();
    while(++it != output.end())
        cout << *it << "\n";

    return 0;
}
