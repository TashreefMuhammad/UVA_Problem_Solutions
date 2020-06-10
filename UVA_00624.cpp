#include <iostream>
#include <stack>

using namespace std;

stack <int> item;
void knapsack(int w[], int n, int c);

int main(void)
{
    int c, n, i, sum;

    while(cin >> c)
    {
        cin >> n;
        int w[n+1];

        for(i = 1; i <= n; i++)
            cin >> w[i];

        knapsack(w, n, c);
        sum = 0;
        while(!item.empty())
        {
            cout << w[item.top()] << " ";
            sum += w[item.top()];
            item.pop();
        }
        cout << "sum:" << sum << "\n";
    }

    return 0;
}

void knapsack(int w[], int n, int c)
{
    int i, j, mat[n+1][c+1];
    for(i = 0; i <= n; i++)
        mat[i][0]=0;
    for(j = 0; j <= c; j++)
        mat[0][j]=0;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= c; j++)
        {
            if(w[i] > j)
                mat[i][j]=mat[i-1][j];
            else
                mat[i][j]=max(w[i]+mat[i-1][j-w[i]],mat[i-1][j]);
        }

    for(i = n, j = c; i > 0; i--)
        if(mat[i][j] > mat[i-1][j])
        {
            item.push(i);
            j=j-w[i];
        }
}
