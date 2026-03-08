#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int digitsA[10]={0};
    while (a)
    {
        digitsA[a%10]++;
        a /= 10;
    }

    int digitsB[10]={0};
    while (b)
    {
        digitsB[b%10]++;
        b /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (digitsA[i] != digitsB[i])
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}