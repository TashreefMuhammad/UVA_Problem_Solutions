#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int i, j, st, sum, max_l = 0, l = 0;
    string s;
    vector <string> vec;
    vector <int> len;

    while(1)
    {
        cin >> s;
        if(s == "0")
            break;
        vec.push_back(s);
        l++;
    }

    for(i = 0; i < l; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
        st = vec[i].size();
        len.push_back(st);
        max_l = max(max_l, st);
    }

    s.clear();
    sum = 0;
    for(i = 0; i < max_l; i++)
    {
        for(j = 0; j < l; j++)
            if(len[j] > i)
                sum+=(vec[j][i]-'0');
        s+=((sum%10)+'0');
        sum/=10;
    }
    while(sum)
    {
        s+=((sum%10)+'0');
        sum/=10;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}
