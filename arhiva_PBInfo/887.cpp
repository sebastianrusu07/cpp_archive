#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;

    vector<string> v;
    while (cin >> s && s!="CRIMINALITY")
    {
        v.push_back(s);
    }

    string target=v[v.size()-1],org=target;
    sort(target.begin(),target.end());

    int cnt=0;
    for (int i=0;i<v.size();i++)
    {
        string word = v[i];
        sort(word.begin(),word.end());
        if (word==target && v[i]!=org)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}