#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void inserare(int &n)
{
    string s = to_string(n);
    vector<int> sume;
    for(int i=0;i<s.size()-1;i++)
    {
        sume.push_back(abs((s[i]-'0')-(s[i+1]-'0')));
    }
    int posNext=1;
    for(int i=0;i<sume.size();i++)
    {
        s.insert(posNext,to_string(sume[i]));
        posNext+=2;
    }
    n=stoi(s);
}