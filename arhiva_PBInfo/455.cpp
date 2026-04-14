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
    int z, l, a;
    cin >> z >> l >> a;
    int Z = z, L = l, A = a;

    unordered_map<int, int> zile31 = {
        {1, 1}, {3, 1}, {5, 1}, {7, 1},
        {8, 1}, {10, 1}, {12, 1}
    };

    unordered_map<int, int> zile30 = {
        {4, 1}, {6, 1}, {9, 1}, {11, 1}
    };

    if (l == 2)
    {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        {
            z++;
            if (z > 29)
            {
                Z = 1;
                L = 3;
            }
            else
            {
                Z = z;
                L = l;
            }
            cout << Z << " " << L << " " << A;
            return 0;
        }
        else
        {
            z++;
            if (z > 28)
            {
                Z = 1;
                L = 3;
            }
            else
            {
                Z = z;
                L = l;
            }
            cout << Z << " " << L << " " << A;
            return 0;
        }
    }

    if (zile31.count(l))
    {
        z++;
        if (z > 31)
        {
            Z = 1;
            L = l + 1;
        }
        else
        {
            Z = z;
            L = l;
        }

        if (L > 12)
        {
            L = 1;
            A = a + 1;
        }

        cout << Z << " " << L << " " << A;
        return 0;
    }

    if (zile30.count(l))
    {
        z++;
        if (z > 30)
        {
            Z = 1;
            L = l + 1;
        }
        else
        {
            Z = z;
            L = l;
        }

        cout << Z << " " << L << " " << A;
        return 0;
    }

    return 0;
}
