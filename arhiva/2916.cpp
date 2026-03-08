#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <ctime>
using namespace std;

ifstream cin("triviador.in");
ofstream cout("triviador.out");

int main() {
    int n;
    cin >> n;
    unordered_set<int> scoruri;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int s = a+b+c;
        if (scoruri.find(s) == scoruri.end()) scoruri.insert(s);
    }


    if (scoruri.size()==1)
    {
        cout << "TOTI SUNT CASTIGATORI";
        return 0;
    }

    vector<int> v;
    for (auto i : scoruri)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1] << " " << v[v.size()-2];
    return 0;
}