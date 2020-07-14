#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m, i, j, pay;

    while(1)
    {
        cin >> n >> m;

        if(n == 0 && m == 0)
            break;

        int dragon[n], knight[m];

        for(i = 0; i < n; i++)
            cin >> dragon[i];
        for(j = 0; j < m; j++)
            cin >> knight[j];

        sort(dragon, dragon + n);
        sort(knight, knight + m);

        i = j = pay = 0;

        while(i < n && j < m)
        {
            if(m-j < n-i)
                j = m;
            else if(dragon[i] <= knight[j])
            {
                i++;
                pay += knight[j];
            }
            j++;
        }

        if(i == n)
            cout << pay << "\n";
        else
            cout << "Loowater is doomed!\n";
    }

    return 0;
}
