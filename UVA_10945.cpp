#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int i, l;
    string str, proc;

    while(1)
    {
        getline(cin, str);
        if(str == "DONE")
            break;

        proc = "";
        l = str.size();

        for(i = 0; i < l; i++)
            if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
                proc += tolower(str[i]);
        l = proc.size();

        for(i = 0; i < l; i++)
            if(proc[i] != proc[l-1-i])
                break;
        if(i == l)
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";
    }
    return 0;
}
