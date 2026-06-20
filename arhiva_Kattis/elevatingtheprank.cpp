#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if (a>b) swap(a,b);

    int n;
    cin >> n;

    int sum=(b-a) * 4;
    for (int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nr>a && nr<b) sum+=10;
    }
    cout << sum;
    return 0;
}