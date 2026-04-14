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
    double a,b,c;
    cin >> a >> b >> c;
    if (a+b<c || a+c<b || b+c<a)
    {
        cout << "Imposibil";
        return 0;
    }

    double s = (a+b+c)/2;
    double arie = sqrt((s * (s-a) * (s-b) * (s-c)));

    double result = (double)((int)((arie/s)*100)/100.0);
    cout << fixed << setprecision(2) << result;
    return 0;
}