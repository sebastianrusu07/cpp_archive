#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int b=0,k=0;
    for(int i = 0; i < s.size(); i++)
    {
        if (tolower(s[i])=='b')
        {
            b++;
        }
        if (tolower(s[i])=='k')
        {
            k++;
        }
    }
    if(b==0 && k==0)
    {
        cout << "none";
        return 0;
    }
    if(b>k)
    {
        cout << "boba";
        return 0;
    }

    if(b<k)
    {
        cout << "kiki";
        return 0;
    }
    cout << "boki";
    return 0;
}