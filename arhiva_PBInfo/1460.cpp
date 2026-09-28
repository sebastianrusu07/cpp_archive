#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <string>
#include <bitset>
#include <set>
using namespace std;

ifstream cin("serbare.in");
ofstream cout("serbare.out");

int main(){
    int n,uniformTypes;
    cin>>n>>uniformTypes;

    vector<pair<int,int>> uniforms(uniformTypes);
    for(int i=0;i<uniformTypes;i++)
    {
        uniforms[i].first = i;
        uniforms[i].second = 0;
    }

    for (int i=0;i<n;i++)
    {
        int people,uniform;
        cin>>people>>uniform;
        uniform--;
        uniforms[uniform].second+=people;
    }

    sort(uniforms.begin(),uniforms.end(),[](pair<int,int> a,pair<int,int> b)
    {
        return a.second>b.second;
    });

    for(int i=0;i<uniformTypes;i++)
    {
        cout << uniforms[i].first+1 << ' ';
    }
    return 0;
}