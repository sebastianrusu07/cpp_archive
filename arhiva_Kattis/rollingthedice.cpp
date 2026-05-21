#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int mult,sides,n;
    char d,plus;
    cin >> mult >> d >> sides >> plus >> n;

    double likely = mult * (1.0+sides)/2.0 + n;
    cout << likely;
    return 0;
}