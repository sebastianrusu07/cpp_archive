#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("canguri.in");
ofstream cout("canguri.out");

int main()
{
    vector<pair<int,int>> canguri;
    int cod,sari;
    while (cin >> cod >> sari && cod!=332)canguri.push_back({sari, cod});
    sort(canguri.begin(), canguri.end());
    cout << canguri[canguri.size()-1].second << '\n' << 800/canguri[canguri.size()-1].first+(800%canguri[canguri.size()-1].first!=0?1:0);
    return 0;
}