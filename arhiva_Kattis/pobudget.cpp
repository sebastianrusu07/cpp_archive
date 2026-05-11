#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int money=0;
    for (int i = 1; i <= n; i++)
    {
        string s;
        int kroner;
        cin >> s >> kroner;
        money += kroner;
    }
    if (money>0)
    {
        cout << "Usch, vinst";
        return 0;
    }
    if (money<0)
    {
        cout << "Nekad";
        return 0;
    }
    cout << "Lagom";
    return 0;
}