#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

bool isAlreadyBiggest(string s)
{
    string sorted = s;
    sort(sorted.begin(),sorted.end(),greater<char>());
    return s==sorted;
}

int main()
{
    string x;
    cin >> x;
    if (isAlreadyBiggest(x))
    {
        cout << 0;
        return 0;
    }
    next_permutation(x.begin(), x.end());
    cout << x;
    return 0;
}