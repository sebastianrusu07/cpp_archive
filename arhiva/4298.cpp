#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("lacom.in");
ofstream cout("lacom.out");
int main()
{
    int n;
    cin >> n;
    long long mare=0,suma=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (nr > mare)
        {
            suma+=nr;
            mare=nr;
        }
    }
    cout << suma << endl;
    return 0;
}
