#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int a,b,c,k;
    cin >> a >> b >> c >> k;

    int volume=a*b*c;
    if (volume>k)
    {
        cout << "SO MUCH SPACE";
        return 0;
    }
    if (volume<k)
    {
        cout << "TOO TIGHT";
        return 0;
    }
    cout << "COZY";
    return 0;
}