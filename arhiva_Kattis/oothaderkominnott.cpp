#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if (t==1)
    {
        int l;
        cin >> l;

        int total = l*l*3;
        int extra = (l-2)*(l-2)*2;

        cout << total - extra;
    }else if (t==2)
    {
        int l,L;
        cin >> l >> L;

        int total = l*L*3;
        int extra = (l-2)*(L-2)*2;

        cout << total - extra;
    }else
    {
        int l,L,h;
        cin >> l >> L >> h;

        int total = l*L*h;
        int extra = (l-2)*(L-2)*(h-1);

        cout << total - extra;
    }
    return 0;
}