#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        if(a[i]==b[i]) continue;
        if (a[i]<b[i])
        {
            cout<<-1;
        }else
        {
            cout<<1;
        }
        return 0;
    }
    cout<<0;
    return 0;
}