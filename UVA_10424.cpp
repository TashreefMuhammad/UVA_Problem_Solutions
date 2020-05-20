#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int i, l1, l2, out1, out2, a;
    string s1, s2;

    while(getline(cin, s1), getline(cin, s2))
    {
        l1 = s1.size();
        l2 = s2.size();

        out1 = out2 = 0;
        for(i = 0; i < l1; i++)
            if(isalpha(s1[i]))
                out1+=tolower(s1[i])-'a'+1;
        for(i = 0; i < l2; i++)
            if(isalpha(s2[i]))
                out2+=tolower(s2[i])-'a'+1;

        while(out1/10 != 0)
        {
            a = out1;
            out1 = 0;
            while(a)
            {
                out1+=a%10;
                a/=10;
            }
        }

        while(out2/10 != 0)
        {
            a = out2;
            out2 = 0;
            while(a)
            {
                out2+=a%10;
                a/=10;
            }
        }

        cout.precision(2);
        cout << fixed << ((double)min(out1, out2)/(double)max(out1, out2)) * 100.00 <<  " %\n";
    }

    return 0;
}
