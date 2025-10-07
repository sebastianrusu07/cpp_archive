#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    string n;
    int first,second;
    cin >> n >> first >> second;
    if (first+second > n.length())
    {
        cout << "imposibil";
        return 0;
    }
    reverse(n.begin(), n.begin()+first);
    reverse(n.end()-second, n.end());
    cout << n;
    return 0;
}