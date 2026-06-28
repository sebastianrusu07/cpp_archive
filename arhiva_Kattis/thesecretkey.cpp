#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

char swapBinary(char c)
{
    return c=='1' ? '0' : '1';
}

int main()
{
    int n;
    cin>>n;

    vector<string> usedKeys;
    for(int i=0;i<n;i++)
    {
        string key;
        cin>>key;
        usedKeys.push_back(key);
    }

    string key(n,'0');
    for(int i=0;i<n;i++)
    {
        key[i]=swapBinary(usedKeys[i][i]);
    }
    cout<<key;
    return 0;
}