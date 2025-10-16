#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main() {
    int n;
    cin>>n;
    int l = (n+1)/2;
    int tort[n+3][n+3];
    long long suma = 0;
    for (int k=0;k<l;k++)
    {
        for (int j=k;j<n-k;j++)
        {
            for (int i=k;i<n-k;i++)
            {
                tort[i][j]=k+1;
                suma+=k+1;
            }
        }
    }
    cout << l << endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<tort[i][j];
        }
        cout<<endl;
    }
    cout << suma << endl;
    return 0;
}