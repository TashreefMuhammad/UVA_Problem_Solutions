#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void)
{
    int round, l, i, wrong;
    string ans, guess;

    while(1)
    {
        cin >> round;

        if(round == -1)
            break;

        cin >> ans >> guess;

        l = guess.size();
        wrong = 0;
        for(i = 0; i < l && wrong < 7 && ans != ""; i++)
        {
            if(ans.find(guess[i]) != string::npos)
                ans.erase(remove(ans.begin(), ans.end(), guess[i]), ans.end());
            else
                wrong++;
        }

        cout << "Round " << round << "\n";
        if(wrong == 7)
            cout << "You lose.\n";
        else if(ans == "")
            cout << "You win.\n";
        else
            cout << "You chickened out.\n";
    }

    return 0;
}
