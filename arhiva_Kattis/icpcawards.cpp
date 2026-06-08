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

    vector<string> codes;
    vector<string> teams;

    for (int i = 0; i < n; i++)
    {
        string code,team;
        cin >> code >> team;
        if (find(codes.begin(), codes.end(), code) == codes.end())
        {
            codes.push_back(code);
            teams.push_back(team);
        }
    }
    for (int i = 0; i < teams.size() && i < 12; i++)
    {
        cout << codes[i] << ' ' << teams[i] << '\n';
    }

    return 0;
}