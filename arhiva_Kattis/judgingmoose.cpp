#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a==0 && b==0){
        cout << "Not a moose";
        return 0;
    }
    if(a==b){
        cout << "Even " << a+b;
        return 0;
    }
    cout << "Odd " << max(a,b)*2;
    return 0;
}