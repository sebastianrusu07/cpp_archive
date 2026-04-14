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

ifstream cin("numere3.in");
ofstream cout("numere3.out");

int sumCif(int nr)
{
    return nr==0 ? 0 : nr%10+sumCif(nr/10);
}

int main()
{
    int a,b,c,p;
    cin>>p>>a>>b>>c;

    if (p==1)
    {
        cout<<sumCif(a)+sumCif(b)+sumCif(c);
        return 0;
    }

    cout << a << " " << c << '\n';
    while (a<b && b<c)
    {
        a+=sumCif(a);
        c-=sumCif(c);
        cout<<a<<" "<<c<<'\n';
    }
    if (a>=b && b>=c)cout << 0;
    else if (a>=b)cout << 1;
    else cout << 2;
    return 0;
}