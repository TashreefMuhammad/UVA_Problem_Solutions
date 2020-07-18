#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct store store;

struct store
{
    int val, freq;
    store(int value, int frequency)
    {
        val = value;
        freq = frequency;
    }

    int getVal()
    {
        return val;
    }
    int getFreq()
    {
        return freq;
    }
};

bool cmp(store s1, store s2)
{
    if(s1.freq == s2.freq)
        return s1.val > s2.val;
    return s1.freq < s2.freq;
}

int main(void)
{
    int i, l, f = 0;
    string str;

    while(getline(cin, str))
    {
        int tab[128] = {0};
        vector <store> st;

        if(f)
            cout << "\n";

        l = str.size();
        for(i = 0; i < l; i++)
            tab[str[i]]++;

        for(i = 0; i < 128; i++)
            if(tab[i] != 0)
                st.push_back(store(i, tab[i]));

        sort(st.begin(), st.end(), cmp);
        l = st.size();

        for(i = 0; i < l; i++)
            cout << st[i].getVal() << " " << st[i].getFreq() << "\n";
        f = 1;
    }

    return 0;
}
