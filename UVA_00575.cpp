#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void)
{
    long long l, i, val;
    string n;

    while(1)
    {
        val = 0;
        cin >> n;

        if(n == "0")
            break;

        l = n.size();

        for(i = 0; i < l; i++)
            if(n[l-1-i] != '0')
                val+= (n[l-1-i]-'0')*((long long)pow(2.0, (double)(i+1))-1);

        cout << val << "\n";
    }

    return 0;
}
