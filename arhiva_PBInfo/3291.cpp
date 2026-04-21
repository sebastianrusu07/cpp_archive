#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

bitset<30000005> app;

int main() {
    int nr;
    while (cin >> nr && nr!=0)
    {
        if (app[nr] == true)
        {
            cout << nr;
            return 0;
        }else
        {
            app[nr] = true;
        }
    }
    return 0;
}