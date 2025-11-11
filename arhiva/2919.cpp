#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> groupA;
    vector<int> groupB;
    int sumA=0,sumB=0;
    for (int i = n; i >= 1; i--)
    {
        if (abs(sumA+i-sumB) < abs(sumB+i-sumA))
        {
            sumA+=i;
            groupA.push_back(i);
        }else
        {
            sumB+=i;
            groupB.push_back(i);
        }
    }
    for (int i : groupA)cout << i << " ";
    cout << endl;
    for (int i : groupB)cout << i << " ";
    return 0;
}