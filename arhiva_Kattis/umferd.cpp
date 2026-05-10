#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int len = n*m,empty=0,total=0;
    for (int i=0;i<len;i++)
    {
        char c;
        cin >> c;
        if (c=='.')
        {
            empty++;
        }
        total++;
    }
    double ratio = double(empty)/double(total);
    cout << fixed << setprecision(5) << ratio;
    return 0;
}

