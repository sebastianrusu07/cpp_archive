#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<string,int> items;
    for(int i=0;i<n;i++)
    {
        string name;
        int amount;
        cin>>name>>amount;
        items[name]+=amount;
    }

    for(auto it:items)
    {
        cout << it.first << ' ' << (it.second+63)/64  << endl;
    }
    return 0;
}