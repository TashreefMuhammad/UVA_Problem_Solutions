#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n,i,l,p;
    char c;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>p>>c;
        if(p==2||p==3||p==5||p==7||p==13||p==17)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    cin>>p;
    if(p==2||p==3||p==5||p==7||p==13||p==17)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
