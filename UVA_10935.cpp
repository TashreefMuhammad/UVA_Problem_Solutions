#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    int n, i, l;
    list <int> cards;

    while(1)
    {
        cin >> n;

        if(n == 0)
            break;

        for(i = 1; i <= n; i++)
            cards.push_back(i);
        l = n;

        cout << "Discarded cards:";
        if(n!=1)
        {
            cout << " " <<cards.front();
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }

        while(--l > 1)
        {
            cout << ", " <<cards.front();
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        cout << "\nRemaining card: " << cards.front() << "\n";
        cards.pop_front();
    }
    return 0;
}
