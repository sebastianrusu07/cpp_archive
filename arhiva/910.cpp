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

void prefix(int nr,int k,int &r)
{
    string t=to_string(nr).substr(0,k);
    r=stoi(t);
}