#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string sortingName(string name)
{
    int pos=0;
    for (; pos < name.length(); pos++)
    {
        if (name[pos] >= 'A' && name[pos] <= 'Z')
        {
            return name.substr(pos);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    vector<pair<string,string>> names;
    for (int i=0;i<n;i++)
    {
        string name;
        getline(cin,name);
        names.push_back(make_pair(sortingName(name),name));
    }

    sort(names.begin(),names.end(),[](const pair<string,string> &a,const pair<string,string> &b)
    {
        return a.first < b.first;
    });

    for (int i=0;i<names.size();i++)
    {
        cout<<names[i].second<<'\n';
    }
    return 0;
}