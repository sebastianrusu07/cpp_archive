#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        sum += nr;
    }
    cout << sum;
    return 0;
}