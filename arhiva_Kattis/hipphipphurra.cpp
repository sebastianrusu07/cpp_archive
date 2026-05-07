#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;
    int n;
    cin >> name >> n;

    for (int i=0;i<n;i++)
    {
        cout << "Hipp hipp hurra, " << name << "!\n";
    }
    return 0;
}