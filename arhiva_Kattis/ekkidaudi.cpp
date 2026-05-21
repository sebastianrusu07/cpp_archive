#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    string x,y;
    getline(cin,x);
    getline(cin,y);

    string a,b;
    int i=0;
    for (;x[i]!='|';i++){}
    a=x.substr(0,i);
    b=x.substr(i+1);

    string c,d;
    i=0;
    for (;y[i]!='|';i++){}
    c=y.substr(0,i);
    d=y.substr(i+1);

    cout << a << c << ' ' << b << d;
    return 0;
}