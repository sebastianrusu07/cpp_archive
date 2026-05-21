#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a-=2;
    b-=2;
    cout << (a>=c && b>=d ? 1 : 0);
    return 0;
}