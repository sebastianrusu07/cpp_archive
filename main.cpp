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
    int Z=z,L=l,A=a;

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
            z++;
            if (z==29)
            {
                Z=1;
                L=3;
            }
            cout << Z << " " << L << " " << A;
            return 0;
        }else
        {
            z++;
            if (z==28)
            {
                Z=1;
                L=3;
            }
            cout << Z << " " << L << " " << A;
            return 0;
        }
    }

    return 0;
}