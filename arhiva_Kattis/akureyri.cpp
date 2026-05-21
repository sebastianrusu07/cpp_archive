#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<string,int> map;
    for(int i=0;i<n;i++)
    {
        string name,region;
        cin>>name>>region;
        map[region]++;
    }
    for(auto it:map)
    {
        cout << it.first << ' ' << it.second << '\n';
    }
    return 0;
}