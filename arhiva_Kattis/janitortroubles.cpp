#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    double s=(a+b+c+d)/2.0;
    double e=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout << fixed << setprecision(7) << e;
    return 0;
}