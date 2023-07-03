#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    int pos;
    string words;
    map <string, string> translate;

    while(true)
    {
        getline(cin, words);

        if(words.length() == 0)
            break;

        pos = words.find(" ");
        translate[words.substr(pos + 1, words.length())] = words.substr(0, pos);
    }

    while(true)
    {
        getline(cin, words);

        if(words.length() == 0)
            break;

        if(translate.find(words) == translate.end())
            cout << "eh\n";
        else
            cout << translate[words] << "\n";
    }
    return 0;
}
