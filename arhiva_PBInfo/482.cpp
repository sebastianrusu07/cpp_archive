#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumaT=0,sumaV=0;
    for (int i = 0; i < n; i++)
    {
        int timp,viteza;
        cin >> timp >> viteza;
        sumaT+=timp;
        sumaV+=viteza*timp;
    }
    double medie = (double)sumaV/(double)sumaT;
    cout << fixed << setprecision(2);
    cout << sumaV << " " << medie;
    return 0;
}