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

ifstream cin("zmeu.in");
ofstream cout("zmeu.out");

int main()
{
    long long material,amountNeeded;
    cin >> material >> amountNeeded;
    amountNeeded*=2;

    cout << material/amountNeeded << endl; //nr zmei

    long long rest = material%amountNeeded;
    cout << abs(rest-amountNeeded);

    return 0;
}