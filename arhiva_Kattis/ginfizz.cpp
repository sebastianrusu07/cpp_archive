#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int gin = n*45;
    int lemonJuice = n*30;
    int syrup = n*10;

    cout << gin << " ml gin\n" << lemonJuice << " ml fresh lemon juice\n" << syrup << " ml simple syrup\n";
    cout << n << (n==1 ? " slice of lemon":" slices of lemon");
}