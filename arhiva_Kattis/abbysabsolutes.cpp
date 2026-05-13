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
    int n,k;
    cin>>n>>k;

    for(int i=0;i<k;i++)
    {
        int nr;
        cin>>nr;

        int distUpper=n-nr;
        int distLower=nr-1;

        if (distLower<=distUpper)
        {
            cout << 1 << ' ';
        }else
        {
            cout << n << ' ';
        }
    }
    return 0;
}