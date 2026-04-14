#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int counter = 1;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nr==k)flag = true;
        if (nr>k)
        {
            counter++;
        }
    }
    if (!flag)
    {
        cout << "-1";
        return 0;
    }
    cout << counter;
    return 0;
}