#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("maxn.in");
ofstream cout("maxn.out");

int main()
{
    int n;
    cin >> n;

    int mare=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        mare=max(mare,nr);
        cout << mare << " ";
    }
    return 0;
}