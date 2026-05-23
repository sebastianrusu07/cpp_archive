#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int sizeA,sizeB;
    cin >> sizeA >> sizeB;

    int a[sizeA];
    for(int i=0;i<sizeA;i++)
    {
        cin >> a[i];
    }

    int b[sizeB];
    for(int i=0;i<sizeB;i++)
    {
        cin >> b[i];
    }

    for(int i=0;i<sizeA;i++)
    {
        if (find(b,b+sizeB,a[i]) != b + sizeB)
        {
            cout << a[i] << ' ';
        }
    }
    return 0;
}