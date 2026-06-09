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
    int n;
    cin >> n;

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        int id,time;
        cin >> id >> time;
        if (id%8!=0 && (time>10000 || time<1)) cnt++;
    }
    cout << cnt;
    return 0;
}
