#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int t,i,first,fristart,satstart,out;
    string m,d;
    cin>>t;
    while(t--)
    {
        cin>>m>>d;
        if(d=="SUN")
            first=1;
        else if(d=="MON")
            first=2;
        else if(d=="TUE")
            first=3;
        else if(d=="WED")
            first=4;
        else if(d=="THU")
            first=5;
        else if(d=="FRI")
            first=6;
        else
            first=7;
        fristart=6-first+1;
        satstart=7-first+1;
        if(fristart==0)
            fristart=8;
        if(m=="JAN"||m=="MAR"||m=="MAY"||m=="JUL"||m=="AUG"||m=="OCT"||m=="DEC")
        {
            out=0;
            for(i=fristart;i<=31;i+=7)
                out++;
            for(i=satstart;i<=31;i+=7)
                out++;
        }
        else if(m=="FEB")
            out=8;
        else
        {
            out=0;
            for(i=fristart;i<=30;i+=7)
                out++;
            for(i=satstart;i<=30;i+=7)
                out++;
        }
        cout<<out<<endl;
    }
    return 0;
}
