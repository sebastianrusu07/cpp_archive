#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int a,x,y,b,v,w;
    cin>>a>>x>>y>>b>>v>>w;

    if (x>y)swap(x,y);
    if (v>w)swap(v,w);
    int ioana = y/a - (x-1)/a;
    int maria = w/b - (v-1)/b;

    if (ioana>maria)
    {
        cout << "Ioana " << ioana;
    }else
    {
        if (ioana==maria)
        {
            cout << "Egalitate " << ioana;
        }else
        {
            cout << "Maria " << maria;
        }
    }
    return 0;
}