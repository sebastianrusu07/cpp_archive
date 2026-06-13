#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    const double root2 = 1.41421356237;
    int l,r;
    cin>>l>>r;

    double diag=root2*l;
    int diam=2*r;
    if (diag<=diam)
    {
        cout << "fits";
    }else
    {
        cout << "nope";
    }
    return 0;
}