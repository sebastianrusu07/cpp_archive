#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double medie = (a+b+c)/3;
    double medie2 = static_cast<double>(static_cast<int>(medie*100)/100.0);
    cout << fixed << setprecision(2);
    cout << medie2;
    return 0;
}



