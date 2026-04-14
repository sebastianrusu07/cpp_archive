#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int z,l,a;
    cin >> z >> l >> a;

    if (l>12 || l<1 || z<1)
    {
        cout << "NU";
        return 0;
    }

    unordered_map<int,int> zile31 = {
        {1,1},
        {3,1},
        {5,1},
        {7,1},
        {8,1},
        {10,1},
        {12,1}
    };

    if (l==2)
    {
        if (a%4==0 && a%100!=0 || a%400==0)
        {
            if (z<=29)
            {
                cout << "DA";
            }else
            {
                cout << "NU";
            }
        }else
        {
            if (z<=28)
            {
                cout << "DA";
            }else
            {
                cout << "NU";
            }
        }
        return 0;
    }

    if (zile31.count(l))
    {
        if (z<=31)
        {
            cout << "DA";
        }else
        {
            cout << "NU";
        }
        return 0;
    }

    if (z<=30)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}