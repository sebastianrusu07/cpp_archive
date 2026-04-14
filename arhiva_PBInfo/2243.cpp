#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    unsigned char c;
    int suma=0,counter=0;
    while (cin >> c && c != '.')
    {
        suma+=static_cast<int>(c);
        counter++;
    }
    int result = suma/counter;
    cout << char(result) << endl ;
    return 0;
}