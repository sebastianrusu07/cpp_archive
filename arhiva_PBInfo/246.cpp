#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numere[n];
    for (int i=0;i<n;++i)
    {
        cin >> numere[i];
    }
    int A=-1,B=-1;
    for (int i=n-1;i>=0;i--)
    {
        if (numere[i]%2!=0)
        {
            if (A==-1)A=numere[i];
            else
            {
                B=numere[i];
                break;
            }
        }
    }
    if (B==-1)
    {
        cout << "Numere insuficiente";
    }else
    {
        cout << B << " " << A;
    }
    return 0;
}