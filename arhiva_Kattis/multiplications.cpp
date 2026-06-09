#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define fierceAwakening 1000000007

int main()
{
    int n;
    cin >> n;

    unsigned long long p = 1;
    for(int i = 0; i < n; i++)
    {
        unsigned long long nr;
        cin >> nr;
        p=p * (nr%fierceAwakening)%fierceAwakening;
    }
    cout << p;
    return 0;
}