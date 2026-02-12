#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("maxcadou.in");
ofstream cout("maxcadou.out");

int main()
{
    long long n;
    cin >> n;

    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = 0;
    }
    while (n)
    {
        arr[n%10]++;
        n/=10;
    }
    for (int i=9;i>=0;i--)
    {
        for (int j=0;j<arr[i];j++)
        {
            cout<<i;
        }
    }
    return 0;
}