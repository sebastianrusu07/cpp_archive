#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int sumCif(int nr)
{
    int s = 0;
    while (nr)
    {
        s+=nr%10;
        nr/=10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        v.push_back(nr);
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int currentSum = sumCif(v[i]);
        int prevSum = sumCif(v[i-1]);
        if ((currentSum%2==0 && prevSum%2!=0) || (currentSum%2!=0 && prevSum%2==0))count++;
    }
    cout << count;
    return 0;
}
