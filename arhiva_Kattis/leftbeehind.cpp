#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int sweet,sour;
    while (cin >> sweet >> sour && (sweet!=0 || sour!=0))
    {
        if (sweet+sour==13)
        {
            cout << "Never speak again.\n";
            continue;
        }
        if (sweet>sour)
        {
            cout << "To the convention.\n";
            continue;
        }
        if (sweet<sour)
        {
            cout << "Left beehind.\n";
            continue;
        }
        cout << "Undecided.\n";
    }
    return 0;
}