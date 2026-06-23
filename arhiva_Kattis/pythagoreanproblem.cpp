#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if (a==b)
    {
        cout << "Pythagoras is sad :(";
        return 0;
    }

    if (a>b) swap(a,b);

    double attempt = sqrt(b*b-a*a);
    if (attempt == (int)attempt)
    {
        cout << attempt;
        return 0;
    }

    attempt = sqrt(a*a+b*b);
    if (attempt == (int)attempt)
    {
        cout << attempt;
        return 0;
    }

    cout << "Pythagoras is sad :(";
    return 0;
}