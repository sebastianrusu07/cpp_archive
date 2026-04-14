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
    int h,a;
    cin >> h >> a;
    if (h==1)
    {
        for (int i = 1; i <= a; i++)
        {
            cout << "__0_0___";
        }
        return 0;
    }
    h-=2;
    for(int i=1;i<=a;i++)
    {
        cout << "__0_0___";
    }
    cout << endl;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout << "_0___0__";
        }
        cout << endl;
    }
    for(int i=1;i<=a;i++)
    {
        cout << "0_____0_";
    }
    return 0;
}