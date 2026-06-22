#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> sentence;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        sentence.push_back(word);
    }

    int m;
    cin>>m;

    unordered_map<string,string> dictionary;
    for(int i=0;i<m;i++)
    {
        string from,to;
        cin>>from>>to;
        dictionary[from]=to;
    }

    for(int i=0;i<sentence.size();i++)
    {
        cout<<dictionary[sentence[i]]<<' ';
    }
    return 0;
}