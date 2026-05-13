#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int sum=0;
    for (int i=0;i<5;i++)
    {
        int a,l;
        cin>>a>>l;
        sum+=a*l;
    }
    sum/=5;

    int n,kwf;
    cin>>n>>kwf;

    int bushels=n*sum/kwf;
    cout<<bushels<<endl;
    return 0;
}