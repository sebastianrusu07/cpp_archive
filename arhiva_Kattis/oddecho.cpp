#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if (i%2==0)
        {
            cout << s << '\n';
        }
    }
    return 0;
}