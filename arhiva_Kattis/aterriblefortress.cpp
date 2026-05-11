#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        sum+=nr;
    }
    cout << sum;
    return 0;
}

