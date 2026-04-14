#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int nr;
    cin >> nr;
    if (nr%10 == nr/100)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}