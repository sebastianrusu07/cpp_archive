#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (name == "Present!")
        {
            v.pop_back();
        }else
        {
            v.push_back(name);
        }
    }
    if (v.empty())
    {
        cout << "No Absences";
    }else
    {
        for (string s : v)
        {
            cout << s << '\n';
        }
    }
    return 0;
}

