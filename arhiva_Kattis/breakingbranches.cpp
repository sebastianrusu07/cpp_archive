#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n%2==0)
    {
        cout << "Alice\n" << 1;
    }else
    {
        cout << "Bob";
    }
    return 0;
}