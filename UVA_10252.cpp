#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void LCS(string str1,string str2);

int main(void)
{
    string s1, s2;

    while(getline(cin, s1))
    {
        getline(cin, s2);
        s1 = " " + s1;
        s2 = " " + s2;
        LCS(s1, s2);
    }
    return 0;
}

void LCS(string str1,string str2)
{
    int l1,l2,i,j;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    string out="";
    l1=str1.size();
    l2=str2.size();
    int mat[l1][l2];
    for(i=0; i<l1; i++)
        mat[i][0]=0;
    for(j=0; j<l2; j++)
        mat[0][j]=0;
    for(i=1; i<l1; i++)
        for(j=1; j<l2; j++)
        {
            if(str1[i]==str2[j])
                mat[i][j]=mat[i-1][j-1]+1;
            else
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
    i--;
    j--;
    while(i>=1 && j>=1)
    {
        if(str1[i]==str2[j])
        {
            out+=str1[i];
            i--;
            j--;
        }
        else if(mat[i-1][j]>=mat[i][j-1])
            i--;
        else
            j--;
    }
    reverse(out.begin(), out.end());
    cout << out << "\n";
}
