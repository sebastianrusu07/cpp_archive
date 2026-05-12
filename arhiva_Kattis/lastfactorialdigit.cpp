#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;

        int last[5]={1,1,2,6,4};
        if (n>=5)
        {
            cout << 0 << '\n';
        }else
        {
            cout << last[n] << '\n';
        }
    }
    return 0;
}