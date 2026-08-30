#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int height=0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        height+=max(x,max(y,z));
    }
    cout<<height;
    return 0;
}