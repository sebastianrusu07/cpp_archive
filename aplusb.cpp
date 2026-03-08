#include <fstream>
using namespace std;

ifstream cin("aplusb.in");
ofstream cout("aplusb.out");

int main() {
    long long a,b;
    cin >> a >> b;

    long long suma = a+b;
    cout << suma;

    cin.close();
    cout.close();

    return 0;
}