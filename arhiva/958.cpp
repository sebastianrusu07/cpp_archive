#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

long long cifru(int nr)
{
    vector<long long> repere={10,190,2890,38890,488890,5888890,68888890,788888890,8888888890,98888888890};
    vector<long long> factori={10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
    int c=to_string(nr).length();
    return repere[c-1] + (nr-factori[c-1]+1)*c;
}

long long magicPage(int nr)
{
    string s = to_string(nr);
    long long maxim = 0;
    for (int i = 1; i < s.length()-1; i++)
    {
        string prefix = s.substr(0,i);
        string suffix = s.substr(i+1);
        maxim = max(maxim,stoll(prefix)*stoll(suffix));
    }
    return maxim;
}

int main()
{
    int n;
    cin>>n;
    cout << magicPage(n) << ' ' << cifru(n);
    return 0;
}