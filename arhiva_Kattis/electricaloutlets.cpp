#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;

        int sum = -k+1;
        for (int j = 1; j <= k; j++)
        {
            int nr;
            cin >> nr;
            sum += nr;
        }
        cout << sum << '\n';
    }
    return 0;
}