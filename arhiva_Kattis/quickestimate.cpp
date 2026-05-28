#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        string nr;
        cin >> nr;
        cout << nr.size() << '\n';
    }
    return 0;
}