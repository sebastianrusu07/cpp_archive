#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    for(int i=1;i<=n;i++)
    {
        char c;
        cin >> c;
        if (c=='(' || c=='[' || c=='{')
        {
            s += c;
        }else
        {
            int pos=s.length()-1;
            if ( (c==')' && s[pos]=='(') || (c==']' && s[pos]=='[') || (c=='}' && s[pos]=='{') )
            {
                s.erase(pos);
            }else
            {
                cout << "Invalid";
                return 0;
            }
        }
    }
    if (!s.empty())
    {
        cout << "Invalid";
    }else
    {
        cout << "Valid";
    }
    return 0;
}