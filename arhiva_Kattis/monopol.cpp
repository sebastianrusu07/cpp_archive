#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int ways[13]={0,0,1,2,3,4,5,6,5,4,3,2,1};
    int n;
    cin>>n;

    double sum=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        sum+=ways[nr];
    }
    cout << fixed << setprecision(5) << sum/36.0;
    return 0;
}