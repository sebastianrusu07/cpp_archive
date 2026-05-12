#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

void addPadding(string &s,int len)
{
    while (s.length()<len)
    {
        s+='m';
    }
}

bool isRicher(string keyA,string keyB)
{
    for(int i=0;i<keyA.size();i++)
    {
        if (keyA[i]!=keyB[i])
        {
            if (keyA[i]=='u' || (keyA[i]=='m' && keyB[i]=='l'))
            {
                return false;
            }
            return true;
        }
    }
    return false;
}

string classKey(string input)
{
    string key;
    while (!input.empty())
    {
        key+=input[0];
        while (input[0]!='-' && !input.empty())
        {
            input.erase(0,1);
        }
        input.erase(0,1);
    }
    return key;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;

        vector<pair<string,string>> v;
        int longest=0;
        while(t--)
        {
            string name,rank,junk;
            cin>>name>>rank>>junk;
            name.pop_back(); //remove :

            rank=classKey(rank);
            reverse(rank.begin(),rank.end()); // reverse for convenience

            v.push_back(make_pair(name,rank));
            longest=max(longest,int(rank.size()));
        }

        for (auto &it : v)
        {
            addPadding(it.second,longest);
        }

        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(isRicher(v[i].second,v[j].second))
                {
                    swap(v[i],v[j]);
                }else
                {
                    if (v[i].second==v[j].second)
                    {
                        if(v[i].first>v[j].first)
                        {
                            swap(v[i],v[j]);
                        }
                    }
                }
            }
        }

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<'\n';
        }
        cout<<"==============================\n";
    }
    return 0;
}