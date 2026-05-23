#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nr=0,limit=0;
    for (int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        nr+=b-a;
        limit=max(limit,nr);
    }
    cout << limit;
    return 0;
}