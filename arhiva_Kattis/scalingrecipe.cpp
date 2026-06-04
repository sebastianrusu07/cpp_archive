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
    int n,k,a;
    cin >> n >> k >> a;
    for(int i=1;i<=n;i++)
    {
        long long nr;
        cin >> nr;

        cout << nr*a/k << endl;
    }
    return 0;
}