#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int perc1;
    cin >> perc1;

    double payout1 = 100.0/perc1;
    double payout2 = 100.0/(100-perc1);

    cout << fixed << setprecision(8) << payout1 << '\n' << payout2;
    return 0;
}