#include <iostream>
#include <iomanip>
using namespace std;

int freq[7];

int main(){
    string s;
    cin >> s;

    int t=0,h=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='H')
        {
            h++;
        }else
        {
            t++;
        }
        if ( (h>=11 || t>=11) && abs(h-t)>=2 )
        {
            h=0;
            t=0;
        }
    }
    cout << t << '-' << h;
    return 0;
}