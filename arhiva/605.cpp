#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("crb.in");
ofstream cout("crb.out");

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        v.push_back(make_pair(nr,i));
    }
    sort(v.begin(), v.end() ,greater<pair<int,int>>());
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (i==v[i].second)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}