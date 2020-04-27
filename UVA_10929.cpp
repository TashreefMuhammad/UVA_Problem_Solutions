#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    int i, l, num, borrow;
    string in;

    while(1)
    {
        cin >> in;

        if(in == "0")
            break;

        string s, proc;
        s = in;
        s.erase(0, min(s.find_first_not_of('0'), s.size()-1));
        reverse(s.begin(), s.end());
        l = s.size();
        proc+=s[0];
        borrow = 0;
        for(i = 1; i < l; i++)
        {
            num = s[i] - proc[i-1] - borrow;
            borrow = 0;
            if(num < 0)
            {
                while(num < 0)
                {
                    num+=10;
                    borrow++;
                }
            }

            proc+=((num%10)+'0');
        }

        reverse(s.begin(), s.end());
        reverse(proc.begin(), proc.end());

        cout << in << " is";
        if(proc[0] != '0')
            cout << " not";
        cout << " a multiple of 11.\n";
    }

    return 0;
}
