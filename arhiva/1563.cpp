#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    string nr;
    cin>>nr;

    for(int i=0;i<nr.length();i++)
    {
        v.push_back(nr[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<char(v[i]);
    }
    return 0;
}