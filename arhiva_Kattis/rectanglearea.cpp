#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double ax,ay,bx,by;
    cin>>ax>>ay>>bx>>by;

    double l = abs(bx-ax);
    double L = abs(by-ay);
    cout << fixed << setprecision(3) << l*L;
    return 0;
}