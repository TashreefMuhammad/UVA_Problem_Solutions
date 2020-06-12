#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int t, l, i, cnt, sum;
    string s;

    cin >> t;

    while(t--)
    {
        cnt = sum = 0;
        cin >> s;
        l = s.size();

        for(i = 0; i < l; i++)
        {
            if(s[i] == 'O')
                cnt++;
            else
                cnt = 0;
            sum += cnt;
        }

        cout << sum << "\n";
    }

    return 0;
}
