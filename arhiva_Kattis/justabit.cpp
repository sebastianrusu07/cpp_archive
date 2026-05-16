#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string s;
    cin >> s;

    int one=0,zero=0;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
        {
            zero++;
        }else
        {
            one++;
        }
    }
    cout << zero << ' ' << one;
    return 0;
}