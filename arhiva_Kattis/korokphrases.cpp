#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    unordered_set<string> set;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        set.insert(s);
    }
    cout << set.size();
    return 0;
}