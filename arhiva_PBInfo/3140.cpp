#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("a1z26.in");
ofstream cout("a1z26.out");

int main()
{
    int c;
    cin >> c;
    cin.ignore();
    if (c==1)
    {
        char k;
        while (cin >> k)
        {
            cout << int(k)-64 << " ";
        }
    }else
    {
        int n;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int nr;
            cin >> nr;
            cout << char(nr+64);
        }
    }
    return 0;
}