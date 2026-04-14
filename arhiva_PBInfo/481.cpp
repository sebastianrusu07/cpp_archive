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
    int a;
    cin >> a;
    for (int i = 1; i*(i+1) <= a; i++)
    {
        if (i*(i+1)==a)
        {
            cout << i << " " << i+1;
            return 0;
        }
    }
    cout << "NU EXISTA";
    return 0;
}