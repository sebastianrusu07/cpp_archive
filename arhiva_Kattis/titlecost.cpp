#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    string name,s;
    cin >> name >> s;

    if (name.size() < stod(s))
    {
        cout << name.size();
        return 0;
    }
    cout << s;
    return 0;
}