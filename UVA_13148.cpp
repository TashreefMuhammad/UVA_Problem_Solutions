#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        if(s=="1"||s=="64"||s=="729"||s=="4096"||s=="15625"||s=="46656"||s=="117649"||s=="262144"||s=="531441"||s=="1000000"||s=="1771561"||s=="2985984"||s=="4826809"||s=="7529536"||s=="11390625"||s=="16777216"||s=="24137569"||s=="34012224"||s=="47045881"||s=="64000000"||s=="85766121")
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }

    return 0;
}
