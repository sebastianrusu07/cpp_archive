#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    string binary;
    cin>>binary;

    while (binary.size()%3!=0)
    {
        binary='0'+binary;
    }

    string build;
    while (!binary.empty())
    {
        string seg = binary.substr(0, 3);
        if (seg=="000") build+='0';
        if (seg=="001") build+='1';
        if (seg=="010") build+='2';
        if (seg=="011") build+='3';
        if (seg=="100") build+='4';
        if (seg=="101") build+='5';
        if (seg=="110") build+='6';
        if (seg=="111") build+='7';
        binary.erase(0,3);
    }
    cout<<build;
    return 0;
}