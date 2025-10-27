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

void Impare(int &n)
{
    string r=to_string(n);
    for (int i=0;i<r.size();i++)
    {
        if ((r[i]-'0')%2!=0)
        {
            r[i]=((r[i]-'0')-1)+'0';
        }
    }
    n=stoi(r);
}