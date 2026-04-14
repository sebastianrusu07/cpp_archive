#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("plimbare.in");
ofstream cout("plimbare.out");

int isPalindrome(int nr)
{
    string newNr = to_string(nr);
    reverse(newNr.begin(), newNr.end());
    return newNr == to_string(nr);
}

int main()
{
    int n;
    cin >> n;

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        cnt += isPalindrome(nr);
    }

    cout << cnt;
    return 0;
}