#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int bottles1,bottles2,cost;
    cin >> bottles1 >> bottles2 >> cost;

    int bottles=bottles1+bottles2,total=0;
    while (bottles/cost>0)
    {
        int bought = bottles/cost;
        total+=bought;
        bottles=bottles%cost+bought;
    }
    cout << total;
    return 0;
}