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

void dublare1(int &nr)
{
    string t=to_string(nr);
    t.insert(t.begin(),t[0]);
    nr = stoi(t);
}