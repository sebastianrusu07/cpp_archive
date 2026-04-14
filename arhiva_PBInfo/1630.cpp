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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j = 1; j <= 3*n - 2*i; j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        for (int y=1; y<=n; y++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= 2*i - 2; j++)
        {
            cout<<" ";
        }
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}