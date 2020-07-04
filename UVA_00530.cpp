#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    long long n, k, i, out;

    while(1)
    {
        cin >> n >> k;

        if(n == 0 && k  == 0)
            break;

        out = 1;
        k = min(k, n-k);

        for(i = 1; i <= k; ++i)
        {
            out *= n-k+i;
            out /= i;
        }

        cout << out << "\n";
    }

    return 0;
}
