#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

ifstream cin("lipsa.in");
ofstream cout("lipsa.out");

int main() {
    long long n;
    cin >> n;
    long long sumaV = 0;
    for (int i = 0; i < n-1; i++)
    {
        long long nr;
        cin >> nr;
        sumaV += nr;
    }
    long long sumaT = 1LL*n*(n+1)/2;
    cout << sumaT-sumaV;
    return 0;
}