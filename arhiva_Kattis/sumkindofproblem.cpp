#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int k,n;
        cin >> n >> k;
        cout << n << ' ' << k*(k+1)/2 << ' ' << k*(k+1)-k << ' ' << k*(k+1) << '\n';
    }
    return 0;
}