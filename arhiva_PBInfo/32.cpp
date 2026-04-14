#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void P(int &a,int b)
{
    string temp;
    while (a)
    {
        if (a%10!=b)temp.insert(temp.begin(),a%10+'0');
        a/=10;
    }
    if (temp.empty())a=0;
    else a=stoi(temp);
}
