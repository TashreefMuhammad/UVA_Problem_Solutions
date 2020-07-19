#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

typedef struct elephant Elp;

struct elephant
{
    int id, weight, iq;
} st[1000];

bool cmp(Elp e1, Elp e2)
{
    if(e1.weight == e2.weight)
        return e1.iq > e2.iq;
    return e1.weight < e2.weight;
}

int main(void)
{
    int i, j, ind = 0, cnt = 0;
    stack <int> out;

    while(cin >> st[cnt].weight >> st[cnt].iq)
    {
        st[cnt].id = cnt;
        cnt++;
    }

    sort(st, st+cnt, cmp);

    int seq[cnt];

    for(i = 0; i < cnt; ++i)
        seq[i] = 1;

    for(i = 1; i < cnt; ++i)
        for(j = 0; j < i; ++j)
            if(st[j].weight < st[i].weight && st[j].iq > st[i].iq)
            {
                seq[i] = max(seq[j] + 1, seq[i]);
                if(seq[i] > seq[ind])
                    ind = i;
            }

    cout << seq[ind] << "\n";
    out.push(st[ind].id + 1);

    for(j = ind - 1; j >= 0 && cnt; j--)
        if(seq[j] == seq[ind] - 1 && st[j].weight < st[ind].weight && st[j].iq > st[ind].iq)
        {
            out.push(st[j].id + 1);
            ind = j;
            cnt--;
        }

    while(!out.empty())
    {
        cout << out.top() << "\n";
        out.pop();
    }

    return 0;
}
