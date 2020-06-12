#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int i, l, s, num, j;
    string n, nums[10][5];

    nums[0][0] = " - ";
    nums[0][1] = "| |";
    nums[0][2] = "   ";
    nums[0][3] = "| |";
    nums[0][4] = " - ";

    nums[1][0] = "   ";
    nums[1][1] = "  |";
    nums[1][2] = "   ";
    nums[1][3] = "  |";
    nums[1][4] = "   ";

    nums[2][0] = " - ";
    nums[2][1] = "  |";
    nums[2][2] = " - ";
    nums[2][3] = "|  ";
    nums[2][4] = " - ";

    nums[3][0] = " - ";
    nums[3][1] = "  |";
    nums[3][2] = " - ";
    nums[3][3] = "  |";
    nums[3][4] = " - ";

    nums[4][0] = "   ";
    nums[4][1] = "| |";
    nums[4][2] = " - ";
    nums[4][3] = "  |";
    nums[4][4] = "   ";

    nums[5][0] = " - ";
    nums[5][1] = "|  ";
    nums[5][2] = " - ";
    nums[5][3] = "  |";
    nums[5][4] = " - ";

    nums[6][0] = " - ";
    nums[6][1] = "|  ";
    nums[6][2] = " - ";
    nums[6][3] = "| |";
    nums[6][4] = " - ";

    nums[7][0] = " - ";
    nums[7][1] = "  |";
    nums[7][2] = "   ";
    nums[7][3] = "  |";
    nums[7][4] = "   ";

    nums[8][0] = " - ";
    nums[8][1] = "| |";
    nums[8][2] = " - ";
    nums[8][3] = "| |";
    nums[8][4] = " - ";

    nums[9][0] = " - ";
    nums[9][1] = "| |";
    nums[9][2] = " - ";
    nums[9][3] = "  |";
    nums[9][4] = " - ";

    while(1)
    {
        cin >> s >> n;

        if(s == 0 && n == "0")
            break;

        l = n.size();
        char mat[2*s+3][l*(s+2)];

        for(i = 0; i < 2*s+3; i++)
            for(j = 0; j < l*(s+2); j++)
                mat[i][j] = ' ';

        for(i = 0; i < l; i++)
        {
            num = n[i]-'0';

            for(j = 1; j <= s; j++)
            {
                mat[0][i*(s+2)+j] = nums[num][0][1];
                mat[j][i*(s+2)] = nums[num][1][0];
                mat[s+1][i*(s+2)+j] = nums[num][2][1];
                mat[s+1+j][i*(s+2)] = nums[num][3][0];
                mat[2*(s+1)][i*(s+2)+j] = nums[num][4][1];
                mat[j][i*(s+2)+s+1] = nums[num][1][2];
                mat[s+1+j][i*(s+2)+s+1] = nums[num][3][2];
            }
        }

        for(i = 0; i < 2*s+3; i++)
        {
            for(j = 0; j < l*(s+2); j++)
            {
                if(j != 0 && j%(s+2) == 0)
                    cout << " ";
                cout << mat[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
