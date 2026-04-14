#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("reuniune.in");
ofstream cout("reuniune.out");

int main()
{
    int n,m;
    unordered_map<int,int> map;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }
    for(int i=0;i<m;i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    vector<int> reuniune;
    for (const auto &p : map)
    {
        reuniune.push_back(p.first);
    }

    sort(reuniune.begin(),reuniune.end());

    for(int i=0;i<reuniune.size();i++)
    {
        cout<<reuniune[i]<<" ";
    }
    return 0;
}
