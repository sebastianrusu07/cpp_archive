#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> words;

    int maxLen=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        words.push_back(s);
        if(s.size()>maxLen)
        {
            maxLen=s.size();
        }
    }

    string res;
    for(int i=0;i<maxLen;i++)
    {
        int sum=0,cnt=words.size();
        for(int j=0;j<words.size();j++)
        {

            if (i>=words[j].size())
            {
                cnt--;
            }else
            {
                sum+=words[j][i];
            }
        }
        res+=(char)(sum/cnt);
    }

    cout<<res;
    return 0;
}