#include <iostream>
#include <string>
#include <map>

using namespace std;

map <char, char> before;
map <char, int> values;
map <int, string> num2rom;

void convertArabic(string n)
{
    int i, out = 0, l = n.size();

    for (i = 0; i < l; ++i)
    {
        out += values[n[i]];

        if (i > 0 and n[i - 1] == before[n[i]])
            out -= 2 * values[n[i - 1]];
    }

    cout << out << "\n";
}

void convertRoman(string n)
{
    int num = stoi(n);
    string out = "";
    map <int, string>::reverse_iterator it;

    while(num > 0)
    {
        for(it = num2rom.rbegin(); it != num2rom.rend(); ++it)
        {
            if(num >= it->first)
            {
                out += it->second;
                num -= it->first;
                break;
            }
        }
    }
    cout << out << "\n";
}

int main(void)
{
    string inp;

    before['V'] = 'I';
    before['X'] = 'I';
    before['L'] = 'X';
    before['C'] = 'X';
    before['D'] = 'C';
    before['M'] = 'C';

    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    num2rom[1000] = "M";
    num2rom[900] = "CM";
    num2rom[500] = "D";
    num2rom[400] = "CD";
    num2rom[100] = "C";
    num2rom[90] = "XC";
    num2rom[50] = "L";
    num2rom[40] = "XL";
    num2rom[10] = "X";
    num2rom[9] = "IX";
    num2rom[5] = "V";
    num2rom[4] = "IV";
    num2rom[1] = "I";

    while (cin >> inp)
    {
        if (inp[0] >= '0' && inp[0] <= '9')
            convertRoman(inp);
        else
            convertArabic(inp);
    }

    return 0;
}