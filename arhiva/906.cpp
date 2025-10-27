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

void sumcif(int nr,int &p,int &i)
{
    i=0;
    p=0;
    while (nr)
    {
        int c=nr%10;
        if (c%2==0)p+=c;
        else i+=c;
        nr/=10;
    }
}