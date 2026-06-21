#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i=0;i<n;i++)
    {
        int need,have,cost;
        cin >> have >> need >> cost;
        sum+=max(need-have,0)*cost;
    }
    cout << sum;
    return 0;
}