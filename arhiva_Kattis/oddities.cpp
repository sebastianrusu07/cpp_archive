#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        cout << nr << (nr%2==0?" is even\n":" is odd\n");
    }
    return 0;
}