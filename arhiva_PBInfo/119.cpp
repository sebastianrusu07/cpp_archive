#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        v[i] = nr;
    }
    sort(v.begin(), v.end());
    cout << v[n-1] << " " << v[n-2];
    return 0;
}