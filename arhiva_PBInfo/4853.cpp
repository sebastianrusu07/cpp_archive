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

void teren(int a,int b)
{
    int p=a*b;
    bool flag = false;
    for(int i=2;i*i<p;i+=2)
    {
        if (p%i==0)
        {
            cout << i << " parcele de arie " << p/i << endl;
            flag = true;
        }
    }
    if(!flag)cout << "nu exista";
}
