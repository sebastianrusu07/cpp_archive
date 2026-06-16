#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int wins=n;
    for (int i = 0; i < n; i++)
    {
        string moves;
        cin >> moves;

        if (moves.find("CD") != string::npos)
        {
            wins--;
        }
    }
    cout << wins;
    return 0;
}