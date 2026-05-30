#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n,p,k;
    cin >> n >> p >> k;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;

        bool hasP=false;
        for (int j = 1; j <= x; j++)
        {
            int nr;
            cin >> nr;
            if (nr == p)
            {
                hasP=true;
            }
        }
        if (hasP)
        {
            cout << "KEEP\n";
        }else
        {
            cout << "REMOVE\n";
        }
    }
    return 0;
}