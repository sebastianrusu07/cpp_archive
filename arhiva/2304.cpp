#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

struct lengthType{
    string word;
    int size;
};

int main()
{
    int n;
    cin>>n;
    vector<lengthType> words;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        words.push_back({word,(int)word.size()});
    }
    int k;
    cin>>k;
    for (auto it : words)
    {
        if (it.size==k)
        {
            cout<<it.word<<" ";
        }
    }
    for (auto it : words)
    {
        if (it.size!=k)
        {
            cout<<it.word<<" ";
        }
    }
    return 0;
}