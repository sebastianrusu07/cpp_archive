#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=1;j--)
        {
            cout<<"#";
        }
        for(int j=0;j<=i*2;j++)
        {
            cout<<"*";
        }
        for(int j=n-i-1;j>=1;j--)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << "#";
        }
        for(int j=0;j<=i*2;j++)
        {
            cout<<"*";
        }
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << "#";
        }
        cout<<endl;
    }
    return 0;
}