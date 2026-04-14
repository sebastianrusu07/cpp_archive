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
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        v[i] = nr;
    }
    sort(v.begin(), v.end());
    cout << v[2] << " " << v[1] << " " << v[0];
    return 0;
}