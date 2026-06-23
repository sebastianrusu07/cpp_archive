#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int last=-200001;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        if (nr>=last)
        {
            cout << nr << ' ';
            last=nr;
        }
    }
    return 0;
}