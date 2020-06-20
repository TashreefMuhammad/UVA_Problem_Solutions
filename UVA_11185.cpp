#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    long long n;
    stack <int> st;

    while(1)
    {
        cin >> n;

        if(n < 0)
            break;

        if(n == 0)
        {
            cout << "0\n";
            continue;
        }
        while(n)
        {
            st.push(n%3);
            n /= 3;
        }

        while(!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }

    return 0;
}
