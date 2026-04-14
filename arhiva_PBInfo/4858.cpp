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

int diviz(int nr)
{
    int mare=1;
    for (int i=1;i*i<=nr;i++)
    {
        if (nr%(i*i)==0)
        {
            mare=i*i;
        }
    }
    return mare;
}