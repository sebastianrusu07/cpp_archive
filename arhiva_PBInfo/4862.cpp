#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string nr;
    cin >> nr;

    string first = nr.substr(0, 4);
    string second = nr.substr(4, 4);

    if (first == second)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}