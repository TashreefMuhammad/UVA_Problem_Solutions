#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    long long p,c,num,i,j=0;
    char com;
    while(1)
    {
        cin>>p>>c;
        if(p==0&&c==0)
            break;
        list <long long> l;
        cout<<"Case "<<++j<<":\n";
        if(c<p)
        {
            for(i=0;i<c;i++)
                l.push_back(i+1);
        }
        else
        {
            for(i=0;i<p;i++)
                l.push_back(i+1);
        }
        while(c--)
        {
            cin>>com;
            if(com=='N')
            {
                cout<<l.front()<<endl;
                l.push_back(l.front());
                l.pop_front();
            }
            else
            {
                cin>>num;
                l.remove(num);
                l.push_front(num);
            }
        }
    }

    return 0;
}
