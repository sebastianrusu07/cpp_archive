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

long long multipli(int x,int y,int diviz)
{
    int nr=y / diviz - (x-1)/diviz;
    return nr;

}

