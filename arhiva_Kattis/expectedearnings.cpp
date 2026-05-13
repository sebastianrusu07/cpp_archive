#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    double p;
    cin >> a >> b >> p;

    double machineFactor=(a-b)*p - b*(1-p);
    cout << (machineFactor<0? "spela" : "spela inte!") << endl;
    return 0;
}