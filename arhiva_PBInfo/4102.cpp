#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

ifstream cin("halfsort3.in");
ofstream cout("halfsort3.out");

int main() {
    int n;
    cin >> n;
    vector<int> all;
    vector<int> pos;   //old names because of reused solution
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        all.push_back(nr);
        if (nr % 2 != 0 )pos.push_back(nr);
        else neg.push_back(nr);
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end() , greater<int>());
    int posC=0,negC=0;
    for (int i = 0; i < n; i++)
    {
        if (all[i] % 2 != 0 )
        {
            cout << pos[posC] << " ";
            posC++;
        }else
        {
            cout << neg[negC] << " ";
            negC++;
        }
    }
    return 0;
}