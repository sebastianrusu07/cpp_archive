#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long produs = 1;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        produs *= nr;
    }
    cout << pow(produs,1.0/n);
    return 0;
}