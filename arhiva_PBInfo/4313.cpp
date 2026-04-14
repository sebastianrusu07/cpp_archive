#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
#include <cctype>
using namespace std;

int onlyImpare(int nr)
{
    string s = to_string(nr);
    string newNr;
    for (int i = 0;i<s.length();i++)
    {
        if ((s[i]-'0')%2!=0) newNr.push_back(s[i]);
    }
    if (newNr.empty()) return 0;
    return stoi(newNr);
}

int main()
{
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        arr.push_back(onlyImpare(nr));
    }
    reverse(arr.begin(),arr.end());
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}