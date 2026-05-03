#include <fstream>
#include <bitset>
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int a,b;
        cin >> a >> b;
        if (a%2!=0 && b%2!=0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}