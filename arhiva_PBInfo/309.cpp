#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long correct = (n*(n+1))/2;
    long long given = 0;

    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        given += nr;
    }
    if (correct == given)cout << "DA";
    else cout << "NU";
    return 0;
}