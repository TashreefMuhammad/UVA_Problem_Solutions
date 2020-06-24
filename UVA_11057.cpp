#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m, i, lo, hi, mid, val, ans, diff, out[2];

    while(cin >> n)
    {
        int price[n];

        for(i = 0; i < n; i++)
            cin >> price[i];

        sort(price, price+n);
        cin >> m;

        /// Given upper limit of book price
        /// Surely difference of two book prices will be lower
        diff = 1000001;
        for(i = 0; i < n-1 && price[i+1]+price[i] <= m; i++)
        {
            /// i will hold the first of the two numbers
            /// Run a binary search on the remaining array to see
            /// if a second number exists to satisfy i as one value
            lo = i+1;
            hi = n-1;
            ans = -1;
            val = m-price[i];

            while(lo <= hi)
            {
                mid = (lo + hi)>>1;

                if(price[mid] > val)
                    hi = mid - 1;
                else if(price[mid] < val)
                    lo = mid + 1;
                else
                {
                    ans = mid;
                    hi = mid - 1;
                }
            }

            /// If found that answer exists, then process to see if it is best so far or not
            if(ans != -1)
            {
                if(price[ans]-price[i] < diff)
                {
                    diff = price[ans]-price[i];
                    out[0] = price[i];
                    out[1] = price[ans];

                    if(out[0] == out[1])
                        break;
                }
            }
        }

        cout << "Peter should buy books whose prices are " << out[0] << " and " << out[1] << ".\n\n";
    }
    return 0;
}
