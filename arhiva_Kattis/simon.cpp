#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        if (line.size() >=11 && line.substr(0,10)=="simon says")
        {
            cout << line.substr(11);
        }
        cout << endl;
    }
    return 0;
}