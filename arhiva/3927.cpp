#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

string removeFirst(long long nr)
{
    string s = to_string(nr);
    long long maximum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        string temp = s;
        temp.erase(temp.end()-i-1);
        if (stoll(temp) > maximum)
        {
            maximum = stoll(temp);
        }
    }
    return to_string(maximum);
}

int main()
{
    long long n;
    cin >> n;
    cout << removeFirst(n);
    return 0;
}