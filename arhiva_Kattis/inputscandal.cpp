#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    vector<string> lines;

    string line;
    while (getline(cin, line))
    {
        lines.push_back(line);
    }

    cout << lines.size() << '\n';
    for (int i = 0; i < lines.size(); i++)
    {
        cout << lines[i] << '\n';
    }
    return 0;
}