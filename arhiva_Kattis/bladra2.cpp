#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double vo,a,t;
    cin >> vo >> a >> t;
    double d = vo*t+a*t*t/2;
    cout << fixed << setprecision(5) << d;
    return 0;
}