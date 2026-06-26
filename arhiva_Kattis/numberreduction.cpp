#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main() //isn't this just the collatz conjecture?
{
    int n;
    cin>>n;

    int steps=0;
    while (n>1)
    {
        if (n%2==0)
        {
            n=n/2;
        }else
        {
            n=n*3+1;
        }
        steps++;
    }
    cout<<steps;
    return 0;
}