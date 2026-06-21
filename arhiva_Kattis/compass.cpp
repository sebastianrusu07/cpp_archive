#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int from,to;
    cin>>from>>to;

    if (from == to)
    {
        cout << 0;
        return 0;
    }

    int a = abs(360+from-to);
    int b = abs(360-from+to);

    while (a>360) a-=360;
    while (b>360) b-=360;

    if (a<b)
    {
        cout << -a;
    }else
    {
        cout << b;
    }
    return 0;
}