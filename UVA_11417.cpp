#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, i, j;

    while(1)
    {
        cin >> n;
        if(n==0)
            break;
        long long out = 0;
        for(i = 1; i < n; i++)
            for(j = i+1; j <= n; j++)
                out+=__gcd(i,j);
        cout << out << "\n";
    }

    return 0;
}
