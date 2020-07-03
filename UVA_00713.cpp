#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n, l1, l2, i, j, carry;
    string num1, num2, out;

    cin >> n;

    while(n--)
    {
        cin >> num1 >> num2;

        l1 = num1.size();
        l2 = num2.size();

        i = carry = 0;
        out = "";

        while(1)
        {
            if(i < l1)
                carry += num1[i] - '0';
            if(i < l2)
                carry += num2[i] - '0';

            out += (carry%10) + '0';
            carry /= 10;
            i++;

            if(i >= l1 && i >= l2)
                break;
        }

        while(carry)
        {
            out += (carry%10) + '0';
            carry /= 10;
            i++;
        }

        for(j = 0; j < i; j++)
            if(out[j] != '0')
                break;
        out.erase(0, j);
        cout << out << "\n";
    }

    return 0;
}
