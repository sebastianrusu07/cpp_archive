#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n >> ws;
    for (int i = 1; i <= n; i++)
    {
        string input;
        getline(cin, input);
        if (input.substr(0,10)=="Simon says")
        {
            cout << input.substr(10) << '\n';
        }
    }
    return 0;
}