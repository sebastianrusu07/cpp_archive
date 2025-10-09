#include <fstream>

using namespace std;
ifstream cin("3lan.in");
ofstream cout("3lan.out");

long long n;
int main() {
    cin >> n;
    cout << 7 * n * (n - 1) / 2;
    cin.close(); cout.close();
    return 0;
}