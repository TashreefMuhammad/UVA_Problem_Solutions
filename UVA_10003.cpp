#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int c[52], compute[52][52];
int solve(int left_ind, int right_ind);

int main(void)
{
    int l, n, i, j;

    while(cin >> l)
    {
        if(l == 0)
            break;

        cin >> n;
        c[n+1] = l;

        for(i = 1; i <= n; i++)
            cin >> c[i];

        for(i = 0; i <= n+1; i++)
            for(j = 0; j <= n+1; j++)
                compute[i][j] = -1;

        cout << "The minimum cutting is " << solve(0, n+1) << ".\n";
    }

    return 0;
}

int solve(int left_ind, int right_ind)
{
    if(right_ind-left_ind == 1)
        return 0;

    else if(compute[left_ind][right_ind] != -1)
        return compute[left_ind][right_ind];

    else
    {
        int tmp = INFINITY;
        for(int i = left_ind+1; i < right_ind; i++)
            tmp = min(solve(left_ind, i) + solve(i, right_ind), tmp);

        return compute[left_ind][right_ind] = c[right_ind] - c[left_ind] + tmp;
    }
}
