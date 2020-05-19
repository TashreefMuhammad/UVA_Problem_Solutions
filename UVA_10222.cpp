#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(void)
{
    int i, l;
    string s;

    getline(cin, s);

    l = s.size();
    for(i = 0; i < l; i++)
    {
        switch(tolower(s[i]))
        {
        case 'e':
            s[i] = 'q';
            break;
        case 'd':
            s[i] = 'a';
            break;
        case 'r':
            s[i] = 'w';
            break;
        case 'f':
            s[i] = 's';
            break;
        case 'c':
            s[i] = 'z';
            break;
        case 't':
            s[i] = 'e';
            break;
        case 'g':
            s[i] = 'd';
            break;
        case 'v':
            s[i] = 'x';
            break;
        case 'y':
            s[i] = 'r';
            break;
        case 'h':
            s[i] = 'f';
            break;
        case 'b':
            s[i] = 'c';
            break;
        case 'u':
            s[i] = 't';
            break;
        case 'j':
            s[i] = 'g';
            break;
        case 'n':
            s[i] = 'v';
            break;
        case 'i':
            s[i] = 'y';
            break;
        case 'k':
            s[i] = 'h';
            break;
        case 'm':
            s[i] = 'b';
            break;
        case 'o':
            s[i] = 'u';
            break;
        case 'l':
            s[i] = 'j';
            break;
        case ',':
            s[i] = 'n';
            break;
        case 'p':
            s[i] = 'i';
            break;
        case ';':
            s[i] = 'k';
            break;
        case '.':
            s[i] = 'm';
            break;
        case '[':
            s[i] = 'o';
            break;
        case '\'':
            s[i] = 'l';
            break;
        case ']':
            s[i] = 'p';
            break;
        }
    }
    cout << s << "\n";

    return 0;
}
