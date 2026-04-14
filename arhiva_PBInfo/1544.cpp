#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

ifstream cin("muzical.in");
ofstream cout("muzical.out");

int decoded(string s)
{
    if (s == "do1") return 0;
    if (s == "re") return 1;
    if (s == "mi") return 2;
    if (s == "fa") return 3;
    if (s == "sol") return 4;
    if (s == "la") return 5;
    if (s == "si") return 6;
    if (s == "do2") return 7;
    return -1;
}

string code(int n)
{
    if (n == 0) return "do1";
    if (n == 1) return "re";
    if (n == 2) return "mi";
    if (n == 3) return "fa";
    if (n == 4) return "sol";
    if (n == 5) return "la";
    if (n == 6) return "si";
    if (n == 7) return "do2";
    return "IDK";
}

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        sum+=decoded(s);
    }

    int rest = sum%8;
    cout << code(rest);
    return 0;
}
