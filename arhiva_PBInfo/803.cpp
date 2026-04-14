#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("nrsufix.in");
ofstream cout("nrsufix.out");

bool hasSuffix(int nr,int suffix)
{
    do{
        if (suffix%10 != nr%10) return false;
        suffix/=10;
        nr/=10;
    }while (suffix);
    return true;
}

int main()
{
    int sfx;
    cin>>sfx;

    int nr,lastWithSuffix=-1;
    while (cin >> nr)
    {
        if (hasSuffix(nr,sfx))
        {
            lastWithSuffix=nr;
        }
    }

    if (lastWithSuffix==-1)
    {
        cout << "nu exista";
    }else
    {
        cout<<lastWithSuffix;
    }
    return 0;
}