#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int n, i, j;
    stack <int> st;

    cin >> n;

    while(1)
    {
        int a[n];
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0)
            {
                cout << "\n";
                break;
            }
        }
        if(i == n)
        {
            for(i = 0, j = 1; i < n; i++)
            {
                if(j == a[i])
                    j++;
                else if(!st.empty() && a[i] == st.top())
                    st.pop();
                else if(j < a[i])
                {
                    while(a[i] != j)
                        st.push(j++);
                    j++;
                }
                else
                    break;
            }
            if(i == n)
                cout << "Yes\n";
            else
                cout << "No\n";
            while(!st.empty())
                st.pop();
        }
        else
        {
            cin >> n;

            if(n == 0)
                break;
        }
    }

    return 0;
}
