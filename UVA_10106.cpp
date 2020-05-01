#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    string s1, s2;
    bool start;
    int rem, l1, l2, i, j, index, out[500];

    while(cin >> s1 >> s2)
    {
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        for(i = 0; i < 500; i++)
            out[i] = 0;

        l1 = s1.size();
        l2 = s2.size();

        rem = index = 0;

        for(i = 0; i < l1; i++)
        {
            for(j = 0; j < l2; j++)
            {
                out[i+j] = out[i+j]+ (s1[i]-'0')*(s2[j]-'0') + rem;
                rem = out[i+j]/10;
                out[i+j]%=10;
            }
            while(rem)
            {
                out[i+j] = out[i+j] + rem;
                rem = out[i+j]/10;
                out[i+j]%=10;
                j++;
            }
            index = max(index, i+j);
        }
        start = false;
        for(j = index-1; j >= 0; j--)
        {
            if(!start && out[j] != 0)
                start = true;
            if(start)
                cout << out[j];
        }

        if(!start)
            cout << "0";
        cout << "\n";
    }

    return 0;
}
