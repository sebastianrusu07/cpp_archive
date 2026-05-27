#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int v[3];
    v[0]=min(a,min(b,c));
    v[2]=max(a,max(b,c));
    v[1]=a+b+c-v[2]-v[0];

    char x,y,z;
    cin >> x >> y >> z;
    cout << v[x-'A'] << ' ' << v[y-'A'] << ' ' << v[z-'A'];
    return 0;
}