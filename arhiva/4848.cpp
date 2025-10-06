#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

ifstream cin("bac.in");
ofstream cout("bac.out");

int main()
{
    string Nr;
    unordered_set<int> sirSet;

    while(cin >> Nr)
    {
        reverse(Nr.begin(), Nr.end());
        sirSet.insert(stoi(Nr));
    }

    if (sirSet.size() < 3)
    {
        cout << "nu exista";
        return 0;
    }

    vector<int> sirSortat(sirSet.begin(), sirSet.end());
    sort(sirSortat.begin(), sirSortat.end());

    cout << sirSortat[0] << " " << sirSortat.back() << " " << sirSortat[1];

    return 0;
}