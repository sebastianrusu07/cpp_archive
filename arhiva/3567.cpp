#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("cod24.in");
ofstream cout("cod24.out");

int main()
{
    int code;
    cin>>code;

    int a,b,c,d;
    a=code/1000;
    b=code/100%10;
    c=code/10%10;
    d=code%10;

    if (a!=9)a++;
    if (b!=9)b++;
    if (c!=9)c++;
    if (d!=9)d++;

    cout<<a<<b<<d<<c<<endl;
    return 0;
}