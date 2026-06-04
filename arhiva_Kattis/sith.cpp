#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int a,b;
    cin >> a >> b;
    int diff=a-b;

    int ans;
    cin >> ans;

    if (diff>=0)
    {
        cout << "VEIT EKKI";
        return 0;
    }

    if (ans!=diff)
    {
        cout << "SITH";
    }else
    {
        cout << "JEDI";
    }
    return 0;
}