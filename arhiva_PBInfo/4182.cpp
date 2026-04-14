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

void secventa(int &n)
{
    string s=to_string(n);
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='2' && s[i+1]=='2')s[i+1]='0';
    }
    n=stoi(s);
}

