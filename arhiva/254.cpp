#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (a>b)
        {
            swap(a,b);
        }
        int temp=1;
        while (temp*2<=b)temp*=2;
        if (temp>=a) cout << temp << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}