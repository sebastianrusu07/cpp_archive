#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <list>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ts = s;
    for (int i = 0; i < s.size(); i++)
    {
        cout << ts << endl;
        ts.pop_back();
    }

    ts = s;
    for (int i = 0; i < s.size(); i++)
    {
        cout << ts << endl;
        ts.erase(ts.begin());
    }
    return 0;
}