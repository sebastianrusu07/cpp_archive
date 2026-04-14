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

void oglindit(int a,int &b)
{
    string s=to_string(a);
    reverse(s.begin(),s.end());
    b=stoi(s);
}
