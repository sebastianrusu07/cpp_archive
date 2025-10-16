#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("puterik.in");
ofstream cout("puterik.out");

bool isPowerOf(int n,int target)
{
    if (n==1)return true;
    int suma = target;
    while (suma < n)
    {
        suma = suma * target;
    }
    if (suma == n)return true;
    return false;
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (isPowerOf(nr,k))vec.push_back(nr);
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}