#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        if (nr<0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}