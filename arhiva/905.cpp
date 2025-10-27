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

void detcifre(int nr,int &i,int &p)
{
    string t=to_string(nr);
    i=t[0]-'0';
    p=nr%10;
}