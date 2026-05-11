#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int limit,n;
    cin>>limit>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int nr;
        cin>>s>>nr;
        cout << s << ' ';
        if (nr>=limit)
        {
            cout << "opin";
        }else
        {
            cout << "lokud";
        }
        cout << '\n';
    }
    return 0;
}