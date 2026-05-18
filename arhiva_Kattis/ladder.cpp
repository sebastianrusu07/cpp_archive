#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int h,a;
    cin >> h >> a;
    cout << ceil(h/sin(a*M_PI/180.0));
    return 0;
}