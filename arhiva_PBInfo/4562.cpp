#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    long long power=1;
    for(int i=0;i<b;i++)
    {
        cout << power << ' ';
        power*=a;
    }
    return 0;
}