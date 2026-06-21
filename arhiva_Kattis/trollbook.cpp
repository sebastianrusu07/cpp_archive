#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

string orders[100005];

int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        string word;
        int pos;
        cin >> word >> pos;

        orders[pos] = word;
    }

    for (int i=1;i<=n;i++)
    {
        cout << orders[i] << ' ';
    }
    return 0;
}