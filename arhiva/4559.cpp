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
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<i;j++)cout << ' ';
        for (int j=1;j<=i;j++)cout << '*';
        cout << endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for (int j=i;j>1;j--)cout << ' ';
        for (int j=i;j>=1;j--)cout << '*';
        cout << endl;
    }
    return 0;
}