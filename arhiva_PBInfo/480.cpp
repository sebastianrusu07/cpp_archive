#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int nr;
    cin >> nr;
    int k=nr/3;
    if (3*k==nr)
    {
        cout << k-1 << " " << k << " " << k+1;
        return 0;
    }
    cout << "NU EXISTA";
    return 0;
}