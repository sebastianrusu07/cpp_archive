#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_set>
#include <cmath>
using namespace std;


int main()
{
    vector<string> v;
    string word;
    while (cin >> word && word != "bologna")
    {
        v.push_back(word);
    }

    unordered_set<string> set;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            if (i==j) continue;
            if (!set.count(v[i]+v[j])) set.insert(v[i]+v[j]);
            if (!set.count(v[j]+v[i])) set.insert(v[j]+v[i]);
        }
    }

    vector<string> sortingList;
    for (auto it : set)
    {
        sortingList.push_back(it);
    }
    sort(sortingList.begin(), sortingList.end());
    for (string s : sortingList)
    {
        cout << s << '\n';
    }
    return 0;
}