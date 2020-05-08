#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int l, cnt, i;
    string s;

    while(getline(cin, s))
    {
        if(s == "")
            cout << "\n";
        else
        {
            l = s.size();
            cnt = 0;

            for(i = 0; i < l; i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                    cnt+=(s[i]-'0');
                else if(s[i] == 'b')
                    while(cnt)
                    {
                        cout << " ";
                        cnt--;
                    }
                else if(s[i] == '!')
                    cout << "\n";
                else
                    while(cnt)
                    {
                        cout << s[i];
                        cnt--;
                    }
            }
            cout << "\n";
        }
    }

    return 0;
}
