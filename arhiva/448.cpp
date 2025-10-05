#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    string nr;
    cin >> nr;

    int c1 = nr[0] - '0';
    int c2 = nr[1] - '0';
    int c3 = nr[2] - '0';

    vector<int> v = {c1, c2, c3};
    sort(v.begin(), v.end());

    cout << v[0] << " " << v[1] << " " << v[2];

    return 0;
}