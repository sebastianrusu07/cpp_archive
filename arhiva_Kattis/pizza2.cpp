#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int R,c;
    cin >> R >> c;

    int r = R-c;

    double smallCircle = M_PI * r * r;
    double bigCircle = M_PI * R * R;

    double areaNoCheese = bigCircle-smallCircle;
    double needsCheese = smallCircle/bigCircle * 100;

    cout << fixed << setprecision(7) << needsCheese;
    return 0;
}