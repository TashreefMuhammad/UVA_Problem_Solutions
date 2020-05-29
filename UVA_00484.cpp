#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main(void)
{
    int in;
    map <int, int> mp;
    queue <int> seq;

    while(cin >> in)
    {
        mp[in]++;
        if(mp[in] == 1)
            seq.push(in);
    }

    while(!seq.empty())
    {
        cout << seq.front() << " " << mp[seq.front()] << "\n";
        seq.pop();
    }

    return 0;
}
