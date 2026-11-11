#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int k;
    string s;
    cin>>k>>s;
    string ans = "";
    for(int i=0; i<s.size();i++)
    {
        while(!ans.empty() && ans.back()>s[i] && k>0)
        {
            ans.pop_back();
            k--;
        }
        ans.push_back(s[i]);
    }
    while (k>0)
    {
        ans.pop_back();
        k--;
    }
    cout << ans;
    return 0;
}