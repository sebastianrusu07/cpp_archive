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

void duplicare(int &n)
{
    string s=to_string(n);
    int next=1;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]-'0')%2==0)
        {
            s.insert(i+1,1,((s[i]-'0')/2)+'0');
            i+=1;
        }
    }
    n=stoi(s);
}