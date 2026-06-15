#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int appearances(string n,string target)
{
    int cnt=0;
    for(int i=0;i<n.size()-target.size()+1;i++)
    {
        for(int j=0;j<target.size();j++)
        {
            if (n[i+j]!=target[j]) break;
            if (j==target.size()-1)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    string target;
    cin>>target;
    int n;
    cin>>n;

    int total=0;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;

        if (word.size()<target.size()) continue;
        total+=appearances(word,target);
    }
    cout<<total;
    return 0;
}