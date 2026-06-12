#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;

        int prev,said=0;
        cin >> prev;
        for(int j=1;j<n;j++)
        {
            int nr;
            cin >> nr;
            if (nr!=prev+j && !said)
            {
                cout << j+1 << '\n';
                said=1;
            }
        }
    }
    return 0;
}