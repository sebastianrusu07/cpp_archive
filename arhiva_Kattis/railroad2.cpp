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

int main()
{
    int a,b;
    cin>>a>>b;

    if (b%2!=0)
    {
        cout << "impossible";
    }else
    {
        cout << "possible";
    }
    return 0;
}